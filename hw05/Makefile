TARGET=sinewave
OBJS=main.o gpio.o
CFLAGS=-g -Wall

$(TARGET):$(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

clean:
	rm -f $(TARGET) $(OBJS)
