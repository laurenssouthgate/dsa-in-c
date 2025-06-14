#include <stdio.h>

void swap(int *a, int *b);

int main(void){
	int b = 42;

	int *a = &b;

	printf("b: %d\n", b);
	printf("&b: %p\n", &b);
	printf("a: %p\n", a);
	printf("&a: %p\n", &a);

	*a = 99;
	
	printf("b: %d\n", b);
	printf("&b: %p\n", &b);
	printf("a: %p\n", a);

	int x, y;
	x = 10;
	y = 43;

	printf("x: %d\n", x);
	printf("y: %d\n", y);

	swap(&x, &y);

	printf("x: %d\n", x);
	printf("y: %d\n", y);

	return 0;
}

void swap(int *a, int *b) {
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}
