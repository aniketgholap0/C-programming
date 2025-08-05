#include<stdio.h>

void displayArray(int a[], int s)
{
    for(int i=0;i<s;i++)
    {
        printf("%d, ",a[i]);
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

    displayArray(arr,n);

    return 0;

}