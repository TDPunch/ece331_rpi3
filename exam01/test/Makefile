TARGET=for
OBJS=fileone.o filetwo.o filethree.o
LIBS=-lm
CFLAGS=-g -Wall
FFLAGS=-g -Wall
ASFLAGS=-g -Wall

$(TARGET):$(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)

clean:
	rm -f $(TARGET) $(OBJS)

