#include <stdio.h>

void number_swap(int a, int b);

int main(void) {
	int a = 12;
	int b = 33;

	number_swap(a, b);

	return 0;
}

void number_swap(int a, int b) {
	printf("a = %d, b = %d\n", a, b);

	int temp = a;
	a = b;
	b = temp;
	
	printf("Swapped values:\n a = %d, b = %d", a, b);
}
