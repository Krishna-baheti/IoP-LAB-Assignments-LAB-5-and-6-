/*
    Topic : PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE 
            ARRAYS.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
int main()
{
    printf("Enter 10 elements of first array\n");
    int arr1[10], arr2[10], temp;
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("First array before swapping is : ");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\nEnter 10 elements of second array\n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("Second array before swapping is : ");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ",arr2[i]);
    }

    // CODE TO SWAP
    for(int i = 0; i < 10; i++)
    {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }

    printf("\n");
    printf("Now first array is : ");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\nNow second array is : ");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}
