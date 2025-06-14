#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	char name[50];
	char id[10];
	int age;
	int grades[5];
} Student;

typedef struct {
	int x;
	int y;
} Point;

typedef struct {
	int *array;
} Data;

void print_student(Student student);
void print_points(Point points[]);


int main(void) {
	Student brian;

	strcpy(brian.name, "Brian");
	strcpy(brian.id, "000123123");
	brian.age = 17;
	brian.grades[0] = 1;
	brian.grades[1] = 3;
	brian.grades[2] = 2;
	brian.grades[3] = 1;
	brian.grades[4] = 3;

	print_student(brian);

	Point point1 = {3, 4};
	Point point2 = { .x = 20, .y = 33 };

	Point points[10];

	for (int i = 0; i < 10; i++) {
		points[i].x =  i;
		points[i].y = 10 - i;
	}

	print_points(points);

	Data x;
	Data y;

	x.array = malloc(sizeof(int) * 5);
	y.array = malloc(sizeof(int) * 5);

	x.array[0] = 1;
	x.array[1] = 2;
	x.array[2] = 3;
	x.array[3] = 4;
	x.array[4] = 5;
	x.array[5] = 6;


	y.array[0] = 9;
	y.array[1] = 9;
	y.array[2] = 9;
	y.array[3] = 9;
	y.array[4] = 9;
	y.array[5] = 9;

	return 0;
}

void print_student(Student student) {
	printf("Name : %s\n", student.name);
	printf("Id: %s\n", student.id);
	printf("Grades: ");
	for (int i = 0; i < 5; i++) {
      		printf("%d, ", student.grades[i]);
	}
	printf("\n");
}

void print_points(Point points[]) {
	for (int i = 0; i < 10; i++) {
      		printf("p%d = (%d, %d)\n", i, points[i].x, points[i].y);
	}
}
