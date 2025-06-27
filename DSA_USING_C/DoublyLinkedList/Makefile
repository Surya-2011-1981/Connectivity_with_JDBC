CC = gcc
CFLAGS = -I HEADER_FILES/include -Wall -Wextra -std=c11
SRC = CREATION_OF_LISTS/doublyLinkedListCreation.c HEADER_FILES/src/dll_functions.c
OBJ = $(SRC:.c=.o)
TARGET = dll_program

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
