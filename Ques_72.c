/*
    Topic : Write a program in C to rotate an array by N positions.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include <stdio.h>

void reverse(int arr[], int a, int b)
{
    for(int i = a, j = b; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{
    printf("Enter the nmuber of elements in array : ");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the value of N by which we want to rotate array : ");
    int k; // k -> N
    scanf("%d",&k);
    k = k % n;
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    printf("\nThe rotated array is : \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

