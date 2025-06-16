#include <stdio.h>

int sum_of_squares(int n);

int main(void) {
	int number1 = 2;
	int sum1 = sum_of_squares(number1);
	printf("%d\n", sum1);

	int number2 = 8;
	int sum2 = sum_of_squares(number2);
	printf("%d\n", sum2);

	return 0;
}

int sum_of_squares(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
      		sum += (i * i);
	}
	return sum;
}

