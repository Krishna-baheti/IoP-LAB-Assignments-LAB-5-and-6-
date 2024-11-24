/*
    Topic : Program to print the pattern
            10000
            01000
            00100
            00010
            00001
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Using for loop to print the above pattern
*/

#include<stdio.h>
int main()
{
    printf("Enter the number of rows : ");
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i == j)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}