/*
    Topic : Program to read an array of ten integers and print their sum.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main()
{
    printf("Enter ten integers\n");
    int arr[10];
    int sum = 0;
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum is %d\n",sum);
    return 0;
}
