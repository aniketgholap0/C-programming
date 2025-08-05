#include <stdio.h>

void displayArray(int a[], int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("%d, ", a[i]);
    }
}

int main()
{
    int ne = 99;
    int p = 2;
    int arr[5] = {10, 20, 30, 40, 50};
    int res[6];

    for (int i = 0; i < p; i++)
    {
        res[i] = arr[i];
    }

    for (int i = 5; i > p; i--)
    {
        res[i] = arr[i - 1];
    }

    res[p] = ne;        //new element

    displayArray(res, 6);
}
