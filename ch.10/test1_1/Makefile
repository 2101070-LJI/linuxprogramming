CC =g++
CFLAGS = -g -Wall
OBJS = main.o
TARGET = getmax

$(TARGET):$(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
main.o:main.cpp 
	$(CC) $(CFLAGS) -c main.cpp


.PHONY:clean
clean:
	rm $(TARGET) $(OBJS)
