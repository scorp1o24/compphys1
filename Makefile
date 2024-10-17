CC = gcc
CFLAGS = -Wall

all:
	$(CC) $(CFLAGS) -o $(FILE) $(FILE).c

clean:
	rm -f $(FILE)
