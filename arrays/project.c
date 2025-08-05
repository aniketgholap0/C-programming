/*
-----------------------------------------------------------------------------------
c program: Understand array and do basic operations
Author: Aniket
Description:
        This program allows user to chose from menu to perform specific tasks using arrays
        such as display array, sum of array, reverse array, etc
-----------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <limits.h>

// function prototype
void displayArray(int a[], int s);
int reverseArray(int a[], int s);
void getMax(int arr[], int s);
void getMin(int arr[], int s);
int sumArray(int a[], int s);
int averageArray(int a[], int s);


// function definations
void displayArray(int a[], int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("%d, ", a[i]);
    }
}

int reverseArray(int a[], int s)
{
    for (int i = s - 1; i >= 0; i--)
    {
        printf("%d, ", a[i]);
    }

    return 0;
}

void getMax(int arr[], int s)
{
    int max = INT_MIN;
    for (int i = 0; i < s; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("\nMax is %d", max);
}

void getMin(int arr[], int s)
{
    int min = INT_MAX;
    for (int i = 0; i < s; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("\nMin is %d", min);
}

int sumArray(int a[], int s)
{
    int sum = 0;
    for (int i = 0; i < s; i++)
    {
        sum += a[i];
    }
    return sum;
}

int averageArray(int a[], int s)
{
    float sum = 0;
    float avg = 0;
    for (int i = 0; i < s; i++)
    {
        sum += a[i];
    }
    avg = sum / s;
    printf("sum is %f\n", sum);
    printf("average is %f", avg); 
    return 0;
}

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

// Display menu of available operations
void displayMenu()
{
    printf("1.Display Array\n");
    printf("2.Reverse array\n");
    printf("3.Maximum among numbers\n");
    printf("4.Minimum among numbers\n");
    printf("5.Sum of elements\n");
    printf("6.Average of array\n");
    printf("7.Find even and odd numbers\n");
    printf("0.Exit\n");
    printf("Enter your choice: ");
}

// main function starts-handles user inputs and performs actions
int main()
{
    int choice, cont, n = 0;
    do
    {
        displayMenu();
        int arr[n];

        scanf("%d", &choice);
        if (choice != 0)
        {
            printf("Enter size of array: ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                printf("Enter element number %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
        }

        switch (choice)
        {
        case 1:
            displayArray(arr, n);
            break;

        case 2:
            reverseArray(arr, n);
            break;

        case 3:
            getMax(arr, n);
            break;

        case 4:
            getMin(arr, n);
            break;

        case 5:
            printf("Sum is %d ", sumArray(arr, n));
            break;

        case 6:
            averageArray(arr, n);
            break;

        case 7:
            getOddEven(arr, n);
            break;

        default:
            printf("Invalid input. Try again.\n");
            break;
        }

        printf("\nTo continue press 1, to exit press 0: ");
        scanf("%d", &cont);
    } while (cont == 1);
    return 0;
}