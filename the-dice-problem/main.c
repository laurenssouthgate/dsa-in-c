#include <stdio.h>

int find_opposite_face(int n);

int main(void)
{
	int num = 1;

	int opposite = find_opposite_face(num);

	printf("The opposite face on the dice to %d is %d\n", num, opposite);

	return 0;
}

int find_opposite_face(int n)
{
	if (n < 1 || n > 6) return 0;

	int opposite = 7 - n;

	return opposite;
}
