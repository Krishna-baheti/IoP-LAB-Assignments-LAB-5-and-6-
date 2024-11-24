/*
    Topic :  PROGRAM TO READ A 3*3 MATRIX AND PRINT SUM OF ALL ROWS
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
int main()
{
    printf("Enter the matrix (3*3) in standard row-wise format\n");
    int arr[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sr1 = 0, sr2 = 0, sr3 = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(i == 0) // first row
            {
                sr1 = sr1 + arr[i][j];
            }
            else if(i == 1)
            {
                sr2 = sr2 + arr[i][j];
            }
            else
            {
                sr3 = sr3 + arr[i][j];
            }
        }
    }
    printf("Sum of elements of row 1 = %d\n",sr1);
    printf("Sum of elements of row 2 = %d\n",sr2);
    printf("Sum of elements of row 3 = %d\n",sr3);
    return 0;
}