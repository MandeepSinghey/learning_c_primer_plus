#make file - this is a comment section
CC=gcc  #compiler for c
TARGET=main#target file name


all:test

clean:
	rm $(TARGET)

compile:
	$(CC) -o $(TARGET) $(TARGET).c

# define test dependency on Compile to succeed
test: $(TARGET)
	./$(TARGET)