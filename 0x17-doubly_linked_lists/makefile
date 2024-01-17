CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 -g
TARGET = a
SCRIPT = 0-main.c
FILE = 0-print_dlistint.c

$(TARGET): $(SCRIPT) $(FILE)
		$(CC) $(CFLAGS) -o $@ $^

.PHONY: all test git style

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
