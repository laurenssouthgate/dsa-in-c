#include <stdio.h>

int sum_of_digits(int n);

int main(void) {
	int n = 124;

	int sum = sum_of_digits(n);

	printf("The sum of the digits in %d is %d", n, sum);

	return 0;
}

int sum_of_digits(int n) {
	int sum = 0;

	if (n == 0) return 0;

	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
      		
	return sum;
}
	
