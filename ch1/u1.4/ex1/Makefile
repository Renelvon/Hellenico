CC = g++
CFLAGS = -Wall -Wextra -Weffc++ -O2 -pedantic -ansi
all : main qubits

main : main.cpp
	$(CC) $(CFLAGS) $^ -o $@

qubits : qubits.cpp
	$(CC) $(CFLAGS) $^ -o $@

clean :
	rm -f main qubits
