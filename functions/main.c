#include <stdio.h>

void printVal(int num, float real);
void recursiveFn(int n);

int main(void) {
	int a = 3;

	printVal(a, 1.5);

	recursiveFn(a);

	return 0;
}


void printVal(int num, float real){
	printf("%d %f\n", num, real);
}

void recursiveFn(int n) {
	if (n == 6) return;

	printf("Recursion level: %d", n);

	recursiveFn(n + 1);
}
