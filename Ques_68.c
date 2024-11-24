/*
    Topic : PROGRAM TO READ TWO 3*3 MATRIX AND MULTIPLY THEIR VALUE AND STORE 
            THEM IN THIRD MATRIX.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
int main()
{
    printf("\nEnter matrix 1 (3*3) in standard row-wise format\n");
    int arr[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n\nEnter matrix 2 (3*3) in standard row-wise format\n");
    int brr[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    printf("\n\nProduct matrix of 1 and 2 is : \n");
    int crr[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            // Code to get each element of multiplication matrix
            crr[i][j] = 0;
            for(int k = 0; k < 3; k++) {
                crr[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}