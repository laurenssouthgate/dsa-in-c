#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d\n", i + 1);
    }

    int i = 0;
    while (i < 5)
    {
        printf("\n%d\n", i + 1);
        i++;
    }

    int j = 0;
    do
    {
        printf("\n%d\n", j + 1);
        j++;
    } while (j < 5);

    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            break;
        }
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            goto skip;
        }
        printf("%d ", i);
    }

skip:
    printf("Skipped");

    return 0;
}