/*
    Topic : Program to print the pattern
            A
            AB
            ABC
            ABCD
            ABCDE
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Using for loop to print the above pattern
*/

#include<stdio.h>

int main()
{
    printf("Enter the value of number of rows : ");
    int n;
    
    scanf("%d",&n);
    for(int i = 1; i <= n; i++) // rows -> n
    {
        char ch = 'A';
        for(int j = 1; j <= i; j++) // columns -> equal to row number or value of i
        {
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}