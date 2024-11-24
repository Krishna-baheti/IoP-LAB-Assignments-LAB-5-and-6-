/*
    Topic : PROGRAM TO READ AN ARRAY AND PRINT THE OCCURRENCE OF ANY PARTICULAR 
            ELEMENT IN THE ARRAY.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
int main()
{
    printf("Enter the size of array : ");
    int n;
    scanf("%d",&n);
    int arr[n];
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the array element you want to find occurrence of : ");
    int n1;
    scanf("%d",&n1);
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == n1)
        {
            count++;
        }
    }
    printf("\nThe element selected is %d\n",n1);
    printf("Its occurence is %d times\n",count);
    return 0;
}