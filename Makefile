CC ?= gcc
CFLAGS ?= -std=c11 -Wall -Wextra -Wpedantic
LDLIBS ?= -lm

SOURCES := $(shell find en tr -name '*.c' | sort)
TARGETS := $(patsubst %.c,build/%,$(SOURCES))

.PHONY: all clean list

all: $(TARGETS)

build/%: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) "$<" -o "$@" $(LDLIBS)

list:
	@printf '%s\n' $(SOURCES)

clean:
	rm -rf build

