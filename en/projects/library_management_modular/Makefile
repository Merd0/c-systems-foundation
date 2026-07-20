CC ?= gcc
CFLAGS ?= -std=c11 -Wall -Wextra -Wpedantic -Iinclude

BUILD_DIR := build
APP := $(BUILD_DIR)/library_app
TEST := $(BUILD_DIR)/test_library

.PHONY: all test clean

all: $(APP) $(TEST)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(APP): src/main.c src/library.c include/library.h | $(BUILD_DIR)
	$(CC) $(CFLAGS) src/main.c src/library.c -o $(APP)

$(TEST): tests/test_library.c src/library.c include/library.h | $(BUILD_DIR)
	$(CC) $(CFLAGS) tests/test_library.c src/library.c -o $(TEST)

test: $(TEST)
	./$(TEST)

clean:
	rm -rf $(BUILD_DIR)
