/*
    Topic : PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND 
            TOTAL NO. EVEN OF EVERY ELEMENT.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
int main()
{
    printf("Enter ten integers\n");
    int arr[10];
    int count_even = 0, count_odd = 0;
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] % 2 == 0)
        {
            count_even++;
        }
        else 
        {
            count_odd++;
        }
    }
    printf("Number of even numbers = %d\n",count_even);
    printf("Number of odd numbers = %d",count_odd);
    return 0;
}