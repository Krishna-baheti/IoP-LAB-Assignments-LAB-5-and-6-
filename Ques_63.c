/*
    Topic : PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
int main()
{
    int arr[3][3];
    printf("Enter the elements of matrix (3*3) row-wise in standard format\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int max = arr[0][0];
    int min = arr[0][0];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
            if(arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    printf("Maximum element of matrix is %d\n",max);
    printf("Minimum element of matrix is %d\n",min);
    return 0;
}