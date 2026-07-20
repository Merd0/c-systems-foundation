CC ?= gcc
CFLAGS ?= -std=c11 -Wall -Wextra -Wpedantic
LDLIBS ?= -lm
PYTHON ?= python3

MODULAR_PROJECTS := en/projects/library_management_modular tr/projects/library_management_modular
STANDALONE_SOURCES := $(shell $(PYTHON) scripts/list_c_sources.py)
STANDALONE_TARGETS := $(patsubst %.c,build/%,$(STANDALONE_SOURCES))

.PHONY: all clean list modular-projects test

all: $(STANDALONE_TARGETS) modular-projects

build/%: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) "$<" -o "$@" $(LDLIBS)

modular-projects:
	@set -e; for project in $(MODULAR_PROJECTS); do \
		$(MAKE) -C $$project all; \
	done

test:
	@set -e; for project in $(MODULAR_PROJECTS); do \
		$(MAKE) -C $$project test; \
	done

list:
	@printf '%s\n' $(STANDALONE_SOURCES)

clean:
	rm -rf build
	@set -e; for project in $(MODULAR_PROJECTS); do \
		$(MAKE) -C $$project clean; \
	done
