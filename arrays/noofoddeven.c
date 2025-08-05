#include<stdio.h>

void getOddEven(int a[], int s)
{
    printf("Even numbers are: ");
    for(int i=0;i<s;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d, ",a[i]);
        }
    }

    printf("\nOdd numbers are: ");
    for(int i=0;i<s;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d, ",a[i]);
        }
    }
}

int main()
{
    int n=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    getOddEven(arr, n);

    return 0;

}