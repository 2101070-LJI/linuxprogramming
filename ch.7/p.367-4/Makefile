CC =g++
CFLAGS = -g -Wall
OBJS = main.o book.o
TARGET = book

$(TARGET):$(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
main.o:main.cpp book.cpp
	$(CC) $(CFLAGS) -c main.cpp
book.o:book.cpp book.hpp
	$(CC) $(CFLAGS) -c book.cpp

.PHONY:clean
clean:
	rm $(TARGET) $(OBJS)
