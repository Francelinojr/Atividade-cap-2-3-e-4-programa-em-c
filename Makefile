CC := gcc
CFLAGS := -std=c11 -Wall -Wextra -Wpedantic -O2
LDLIBS := -lm

SOURCES := $(shell find src -type f -name "*.c" | sort)
BINARIES := $(patsubst src/%.c,bin/%,$(SOURCES))

.PHONY: all clean

all: $(BINARIES)

bin/%: src/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $< $(LDLIBS) -o $@

clean:
	rm -rf bin
