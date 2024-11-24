/*
    Topic : PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDITION OF 
            THOSE ARRAYS INTO THIRD.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
int main()
{
    printf("Enter 10 elements of first array\n");
    int arr1[10], arr2[10], arr3[10];
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter 10 elements of second array\n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("Third array is : ");
    for(int i = 0; i < 10; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
         printf("%d ",arr3[i]);
    }
    return 0;
}