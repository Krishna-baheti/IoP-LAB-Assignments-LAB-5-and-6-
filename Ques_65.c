/*
    Topic :  PROGRAM TO READ A 3*3 MATRIX AND PRINT ITS TRANSPOSE.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
int main()
{
    printf("Enter a matrix (3*3) is standard row-wise format\n\n");
    int arr[3][3], brr[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Entered matrix is : \n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n\nTranspose of entered matrix is : \n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            brr[i][j] = arr[j][i]; 
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

