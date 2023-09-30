CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 -g
TARGET = prog
SRCS = $(wildcard 4*.c)
OBJS = $(SRCS:.c=.o)
DEPS = $(OBJS:.o=.d)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

-include $(DEPS)

%.o: %.c
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

.PHONY: all clean

all: $(TARGET)

clean:
	rm -f $(TARGET) $(OBJS) $(DEPS)
