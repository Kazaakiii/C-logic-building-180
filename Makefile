CC      = gcc
CFLAGS  = -Wall -Wextra -std=c11
SRCS    = $(wildcard */*.c)
BINS    = $(patsubst %.c,build/%,$(SRCS))

.PHONY: all test clean

all: $(BINS)

build/%: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ $< -lm

test: all
	@pass=0; fail=0; \
	for b in $(BINS); do \
		if ./$$b > /dev/null; then pass=$$((pass+1)); else fail=$$((fail+1)); echo "FAILED: $$b"; fi; \
	done; \
	echo "Passed: $$pass  Failed: $$fail"; \
	[ $$fail -eq 0 ]

clean:
	rm -rf build
