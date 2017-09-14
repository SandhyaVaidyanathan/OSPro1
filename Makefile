CC = gcc
CFLAGS = -g 
TARGET1 = my_prog
OBJS1 = p1q1.o
TARGET2 = my_prog_q4
OBJS2 = p1q4.o
TARGET3 = my_prog_q5
OBJS3 = p1q5.o
TARGET4 = my_prog_q6
OBJS4 = p1q6.o
TARGET5 = my_prog_q7
OBJS5 = p1q7.o
TARGET6 = my_prog_q8
OBJS6 = p1q8.o

all: $(TARGET1) $(TARGET2) $(TARGET3) $(TARGET4) $(TARGET5) $(TARGET6)

$(TARGET1): $(OBJS1)
	$(CC) -o $@ $(OBJS1) 

$(TARGET2): $(OBJS2)
	$(CC) -o $@ $(OBJS2) 
 
$(TARGET3): $(OBJS3)
	$(CC) -o $@ $(OBJS3) 

$(TARGET4): $(OBJS4)
	$(CC) -o $@ $(OBJS4) 

$(TARGET5): $(OBJS5)
	$(CC) -o $@ $(OBJS5) 

$(TARGET6): $(OBJS6)
	$(CC) -o $@ $(OBJS6) 

.SUFFIXES: .c .o

.c.o:
	$(CC) -c $(CFLAGS) $<

.PHONY: clean

clean:
	/bin/rm -f core *.o $(TARGET1) $(TARGET2) $(TARGET3) $(TARGET4) $(TARGET5) $(TARGET6)

