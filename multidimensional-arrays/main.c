#include <stdio.h>

int main(void) {
	int two_d[10][20];
	int three_d[10][20][30];

	int arr[3][2] = { {0, 1}, {2, 3}, {4, 5} };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
      			printf("arr[%d][%d]: %d ", i, j, arr[i][j]);
      		}
		printf("\n");
	}
	
	return 0;
}


