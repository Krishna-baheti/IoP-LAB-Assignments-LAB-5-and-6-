/*
    Topic :  PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF 
             POSITIVE, NEGATIVE, AND ZERO ELEMENTS
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
int main()
{
    printf("Enter ten integers\n");
    int arr[10];
    int count_positive = 0, count_negative = 0, count_zero = 0;
    
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] > 0)
        {
            count_positive++;
        }
        else if(arr[i] == 0)
        {
            count_zero++;
        }
        else
        {
            count_negative++;
        }
    }
    printf("Number of positive elements = %d\n",count_positive);
    printf("Number of negative elements = %d\n",count_negative);
    printf("Number of elements having value zero = %d\n",count_zero);
    return 0;
}