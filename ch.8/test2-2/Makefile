CC =g++
CFLAGS = -g -Wall
OBJS = main.o tv.o
TARGET = tv

$(TARGET):$(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
main.o:main.cpp tv.cpp
	$(CC) $(CFLAGS) -c main.cpp
tv.o:tv.cpp tv.hpp
	$(CC) $(CFLAGS) -c tv.cpp

.PHONY:clean
clean:
	rm $(TARGET) $(OBJS)
