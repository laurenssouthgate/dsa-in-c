#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[20];
    int age;

    printf("Enter your name: \n");
    fgets(name, sizeof(name), stdin);
    printf("Enter your age: \n");
    scanf("%d", &age);

    printf("\nYour name is %s and your age is %d", name, age);

    return 0;
}