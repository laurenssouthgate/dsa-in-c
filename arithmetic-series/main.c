#include <stdio.h>

int find_nth_term(int a1, int a2);

int main(void) {
	int a = 2;
	int b = 4;

	int n = find_nth_term(a, b);

	printf("The next number in the sequence %d, %d is %d\n", a, b, n);

	return 0;
}

int find_nth_term(int a1, int a2) {
	int diff = a2 - a1;
	int n = a2 + diff;
	return n;
}
