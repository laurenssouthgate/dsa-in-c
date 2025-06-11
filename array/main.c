#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void reversePrintArray(int arr[], int n)
{
    for (int i = n; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}

int returnMax(int arr[], int n)
{
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int returnSum(int arr[], int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }

    return total;
}

void reverseArray(int arr[], int n)
{
    int l = 0, r = n - 1;
    while (l < r)
    {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
}

void recursiveReverseArray(int arr[], int l, int r)
{
    if (l >= r)
    {
        return;
    }

    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;

    recursiveReverseArray(arr, l + 1, r - 1);
}

void reverseArray2(int arr[], int n)
{
    int temp[n];

    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[n - i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

void arrayInsert(int arr[], int *n, int pos, int val)
{
    for (int i = *n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = val;

    (*n)++;
}

void appendArray(int arr[], int *n, int val)
{
    arr[*n] = val;

    (*n)++;
}

void arrayDelete(int arr[], int *n, int key)
{
    int i = 0;

    while (arr[i] != key)
        i++;

    for (int j = i; j < *n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }

    (*n)--;
}

int main(void)
{
    int arr[5] = {2, 4, 8, 16, 32};

    printf("%d ", arr[2]);
    printf("%d ", arr[4]);
    printf("%d ", arr[0]);

    arr[0] = 1;

    printf("%d ", arr[0]);

    arr[0] = 2;

    int size = sizeof(arr) / sizeof(arr[0]);

    printf("\nSize of Array: %d\n", size);
    printf("\n");

    printArray(arr, size);
    printf("\n");

    reversePrintArray(arr, size);
    printf("\n");

    int arr2[] = {12, 4394, 934, 342, 432, 3, 4};
    int len = sizeof(arr2) / sizeof(arr2[0]);
    int max = returnMax(arr2, len);
    printf("Max: %d\n", max);

    int sum = returnSum(arr2, len);
    printf("Sum: %d\n", sum);

    recursiveReverseArray(arr2, 0, len - 1);
    printArray(arr2, len);

    reverseArray2(arr2, len);
    printArray(arr2, len);

    int arr3[7] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 3;
    int val = 25;

    arrayInsert(arr3, &n, pos, val);
    printArray(arr3, 7);

    appendArray(arr3, &n, 60);
    printArray(arr3, 7);

    return 0;
}