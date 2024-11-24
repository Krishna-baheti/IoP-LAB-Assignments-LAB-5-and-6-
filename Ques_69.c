/*
    Topic : PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/


#include<stdio.h>
int main()
{
    printf("Enter the number of elements in array : ");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter element %d : ", i + 1);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the element you want to search : \n");
    int n1;
    scanf("%d",&n1);
    int flag = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == n1)
        {
            printf("Array element %d is at index %d\n", n1, i);
            flag = 1;
        }
    }
    if(flag == 0) {
        printf("%d is not present in the given array\n",n1);
    }
    return 0;
}