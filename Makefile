CC = g++
CFLAGS = -g -Wall

all: vidisha

%.o: %.h %.cpp
	$(CC) $(CFLAGS) -c $^

vidisha: main.o contact.o ui_insert.o
	$(CC) $(CFLAGS) $^ -o $@.app

clean:
	rm -f *.o *.gch *.app