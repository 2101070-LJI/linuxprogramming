CC =g++
CFLAGS = -g -Wall
OBJS = main.o complex.o
TARGET = complex

$(TARGET):$(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
main.o:main.cpp complex.cpp
	$(CC) $(CFLAGS) -c main.cpp
complex.o:complex.cpp complex.hpp
	$(CC) $(CFLAGS) -c complex.cpp

.PHONY:clean
clean:
	rm $(TARGET) $(OBJS)
