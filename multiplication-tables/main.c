#include <stdio.h>

void get_multiplication_table(int n, int count);

int main(void) {
	int number = 9;

	get_multiplication_table(number, 1);

	return 0;
}

void get_multiplication_table(int n, int count) {
	if (count == 11) return;
	
	printf("%d x %d = %d\n", n, count, n * count);

	get_multiplication_table(n, count + 1);
}
	
		
