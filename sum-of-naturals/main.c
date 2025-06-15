#include <stdio.h>

int sum_of_naturals(int n);

int main(void) {
	int number = 5;

	int sum = sum_of_naturals(number);

	printf("%d", sum);

	return 0;
}

int sum_of_naturals(int n) {
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		sum = sum + i;
	}
	return sum;
}
