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

	int three_d_arr[2][3][2] = { { {1, 1}, {2, 3},
					{4, 5} }, { {6, 7},
						{8, 9}, {10, 11} } };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
      			for (int k = 0; k < 2; k++) {
      				printf("arr[%i][%i][%i] = %d ", i, j, k, three_d_arr[i][j][k]);
      			}
      			printf("\n");
		}
		printf("\n\n");
	}
	
	return 0;
}


