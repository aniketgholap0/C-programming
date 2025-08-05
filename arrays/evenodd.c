#include <stdio.h>

void displayNumber(int en[], int s)
{
    int even[s],evenIndex=0;
    for (int i = 0; i < s; i++)
    {
        if(en[i]%2==0)
        {
           // printf("%d, ",en[i]);
            even[evenIndex]=en[i];
            evenIndex++;
        }
    }

    for(int i=0;i<evenIndex;i++)
    {
        printf("%d, ",even[i]);
    }
}


void main()
{
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    displayNumber(num, 10);
}