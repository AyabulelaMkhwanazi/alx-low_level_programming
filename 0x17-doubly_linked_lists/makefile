CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 -g
TARGET = a
SCRIPT = 2-main.c
FILE = 2-add_dnodeint.c
COMPILE_SCRIPT = compile.sh
GCC_FILES = $(shell bash $(COMPILE_SCRIPT))
LATEST_MAIN = $(shell ls -t *-main.c | head -n 1)

compile:
		@chmod u+x $(COMPILE_SCRIPT)
		./$(COMPILE_SCRIPT)

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
