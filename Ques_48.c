/*
    Topic : Program to print the pattern
            1
            12
            123
            1234
            12345
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main()
{
    printf("Enter the value of number of rows : ");
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++) // rows -> n
    {
        for(int j = 1; j <= i; j++) // columns -> row number
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
