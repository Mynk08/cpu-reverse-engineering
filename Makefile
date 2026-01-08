CC = gcc
CFLAGS = -O2 -Wall -Wextra

SRCS = src/transistor.c src/main.c src/visualizer.c
OBJS = $(SRCS:.c=.o)

TARGET = visual6502

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ -lm

clean:
	rm -f $(OBJS) $(TARGET)
