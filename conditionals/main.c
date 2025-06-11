#include <stdio.h>

int SUM(int a, int b)
{
    return a + b;
}

int main(void)
{
    int num = 10;

    if (num < 18)
    {
        printf("You are too young to vote");
    }
    else if (num > 18)
    {
        printf("You are eligible to vote");
    }
    else
    {
        printf("Invalid input");
    }

    int n1 = 10, n2 = 20;
    int sum = SUM(n1, n2);
    printf("\nSum of %d and %d is %d", n1, n2, sum);

    return 0;
}