include update.mk

CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 -g
TARGET = a
SCRIPT = 6-main.c
FILE = 6-sum_dlistint.c
COMPILE_SHELL = compile.sh
GCC_FILES = $(shell bash $(COMPILE_SHELL))
LATEST_MAIN = $(shell ls -t *-main.c | head -n 1)

compile:
		@chmod u+x $(COMPILE_SHELL)
		./$(COMPILE_SHELL)

$(TARGET): $(LATEST_MAIN) $(GCC_FILES)
		$(CC) $(CFLAGS) -o $@ $^

.PHONY: all test git style compile

all: test count style

test: $(TARGET)
		@echo
		@echo "Running $(TARGET)..."
		@sleep 1
		@./$(TARGET)
		@echo

git:
		@echo "Enter a commit message: "; \
		read NEW_MSG; \
		git add .;\
		git commit -m "$$NEW_MSG"; \
		git push

clean:
		rm -f $(TARGET)

count:
		@echo
		@echo "Line count:"
		@wc -l $(FILE)
		@echo

style:
		@echo "Checking $(FILE) for style errors..."
		@bash -c '\
		OUTPUT=$$(betty $(FILE)); \
		if [ -n "$$OUTPUT" ]; then \
				echo -e "\n$$OUTPUT"; \
		else \
				echo "No errors"; \
		fi'
		@echo
