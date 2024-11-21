# Compiler and flags
CC = gcc
CFLAGS = -Iinclude -Wall -g

# Source files
SRC = src/main.c src/deadlock.c src/resources.c test_cases.c

# Object files
OBJ = main.o deadlock.o resources.o test_cases.o

# Output executable
TARGET = deadlock_detector

# Build the project
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

# Compile main.c
main.o: src/main.c
	$(CC) $(CFLAGS) -c src/main.c -o main.o

# Compile deadlock.c
deadlock.o: src/deadlock.c
	$(CC) $(CFLAGS) -c src/deadlock.c -o deadlock.o

# Compile resources.c
resources.o: src/resources.c
	$(CC) $(CFLAGS) -c src/resources.c -o resources.o

# Compile test_cases.c
test_cases.o: test_cases.c
	$(CC) $(CFLAGS) -c test_cases.c -o test_cases.o

# Clean object and executable files
clean:
	rm -f $(OBJ) $(TARGET)

# Run the tests
run: $(TARGET)
	./$(TARGET)
