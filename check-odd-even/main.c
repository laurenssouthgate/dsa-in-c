#include <stdio.h>

void check_even(int n);

int main(void) {
	int number = 197;

	check_even(number);
	
	return 0;
}

void check_even(int n) {
	if (n % 2 == 0) printf("%d is an even number\n", n);
	else printf("%d is on odd number\n", n);
}
