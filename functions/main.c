#include <stdio.h>

void printVal(int num, float real);

int main(void) {
	int a = 3;

	printVal(a, 1.5);

	return 0;
}


void printVal(int num, float real){
	printf("%d %f\n", num, real);
}
