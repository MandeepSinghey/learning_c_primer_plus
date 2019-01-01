#make file

CC=gcc#compiler for c
TARGET=main#target file name
ADDITIONAL_TARGET1=hotel


all:test

clean: 
	rm $(TARGET)

################################################################################################
# By not adding dependencies, changes are not picked up automatically, when you change file
# TARGET : DEPENDENCIES
# RECIEPE
################################################################################################
$(TARGET): $(ADDITIONAL_TARGET1).c $(TARGET).c
	$(CC) -o $(ADDITIONAL_TARGET1).o $(ADDITIONAL_TARGET1).c -o $(TARGET) $(TARGET).c

# define test dependency on Compile to succeed
test: $(TARGET)
	./$(TARGET)