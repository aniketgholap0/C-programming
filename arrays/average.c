#include<stdio.h>

int averageArray(int a[], int s)
{
    float sum=0;
    float avg=0;
    for(int i=0;i<s;i++)
    {
        sum += a[i];
    }
    avg = sum / s;
    printf("sum is %f\n",sum);
    printf("average is %f",avg);        //avg= sum/(float)s
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
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

    averageArray(arr,n);

    return 0;

}