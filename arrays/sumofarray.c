#include<stdio.h>

int sumArray(int a[], int s)
{
    int sum=0;
    for(int i=0;i<s;i++)
    {
        sum += a[i];
    }
    return sum;
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
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

    printf("sum is %d",sumArray(arr,n));

    return 0;

}