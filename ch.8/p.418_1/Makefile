CC =g++
CFLAGS = -g -Wall
OBJS = main.o circle.o
TARGET = circle

$(TARGET):$(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
main.o:main.cpp circle.cpp
	$(CC) $(CFLAGS) -c main.cpp
circle.o:circle.cpp circle.hpp
	$(CC) $(CFLAGS) -c circle.cpp

.PHONY:clean
clean:
	rm $(TARGET) $(OBJS)
