CC = g++
CFLAGS = -Wall -O2 -Wextra -Weffc++ -FORTIFY_SOURCE -ansi -pedantic

main : main.cpp
	$(CC) $(CFLAGS) $^ -o $@

clean :
	rm -f main.o main
