CC =g++
CFLAGS = -g -Wall
OBJS = main.o Power.o
TARGET = Power

$(TARGET):$(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
main.o:main.cpp Power.cpp
	$(CC) $(CFLAGS) -c main.cpp
Power.o:Power.cpp Power.hpp
	$(CC) $(CFLAGS) -c Power.cpp

.PHONY:clean
clean:
	rm $(TARGET) $(OBJS)
