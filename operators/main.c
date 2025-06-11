#include <stdio.h>

int main(void)
{
    int a = 25, b = 5;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a % b = %d\n", a % b);
    printf("+a = %d\n", +a);
    printf("-a = %d\n", -a);
    printf("a++ = %d\n", a++);
    printf("a-- = %d\n", a--);

    printf("a < b : %d\n", a < b);
    printf("a > b : %d\n", a > b);
    printf("a <= b : %d\n", a <= b);
    printf("a >= b : %d\n", a >= b);
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);

    printf("a && b : %d\n", a && b);
    printf("a || b : %d\n", a || b);
    printf("!a : %d\n", !a);

    printf("a & b : %d\n", a & b);
    printf("a | b : %d\n", a | b);
    printf("a ^ b : %d\n", a ^ b);
    printf("~a : %d\n", ~a);
    printf("a << 1 : %d\n", a << 1);
    printf("a >> 1 : %d\n", a >> 1);

    printf("a = b : %d\n", a = b);
    printf("a += b : %d\n", a += b);
    printf("a -= b : %d\n", a -= b);
    printf("a *= b : %d\n", a *= b);
    printf("a /= b : %d\n", a /= b);
    printf("a %%= b : %d\n", a %= b);
    printf("a &= b : %d\n", a &= b);
    printf("a |= b : %d\n", a |= b);
    printf("a ^= b : %d\n", a ^= b);
    printf("a <<= b : %d\n", a <<= b);
    printf("a >>= b : %d\n", a >>= b);

    int num = 10;
    int *add_of_num = &num;

    printf("sizeof(num) = %d bytes\n", sizeof(num));
    printf("&num = %p\n", &num);
    printf("*add_of_num = %d\n", *add_of_num);
    printf("(10 < 5) ? 10 : 20 = %d\n", (10 < 5) ? 10 : 20);
    printf("(float)num = %f\n", (float)num);

    return 0;
}