#include<stdio.h>

int reverseArray(int a[], int s)
{
    for(int i=s-1;i>=0;i--)
    {
        printf("%d, ",a[i]);
    }

    return 0;
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

    reverseArray(arr,n);

    return 0;

}