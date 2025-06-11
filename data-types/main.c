#include <stdio.h>

int main(void)
{
    int var = 22;
    char ch = 'A';
    float val = 12.45;
    double dval = 1.4521;

    printf("var = %d", var);
    printf("\nch = %c", ch);
    printf("\nval = %f", val);
    printf("\ndval = %lf", dval);

    printf("\nThe size of var is %d bytes", sizeof(var));
    printf("\nThe size of ch is %d bytes", sizeof(ch));
    printf("\nThe size of val is %d bytes", sizeof(val));
    printf("\nThe size of dval is %d bytes", sizeof(dval));

    return 0;
}