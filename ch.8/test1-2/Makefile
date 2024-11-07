CC =g++
CFLAGS = -g -Wall
OBJS = main.o shape.o
TARGET = shape

$(TARGET):$(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
main.o:main.cpp shape.cpp
	$(CC) $(CFLAGS) -c main.cpp
shape.o:shape.cpp shape.hpp
	$(CC) $(CFLAGS) -c shape.cpp

.PHONY:clean
clean:
	rm $(TARGET) $(OBJS)
