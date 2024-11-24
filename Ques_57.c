/*
    Topic : PROGRAM TO READ N NOS AND FINDOUT MAX AND SECOND MAX
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
int main()
{
    printf("Enter the size of array : ");
    int n;
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n - 1; i++) {
        // shifts the max element to the last index
        if(arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    printf("Maximum element is : %d\n",arr[n - 1]); // last index is max element
    int second_max = arr[0];
    for(int i = 0; i < n - 1; i++) { // apply condition of max for n - 1 elements
        if(arr[i] > second_max) {
            second_max = arr[i];
        }
    }
    printf("Second max element is %d\n",second_max);
    return 0;
}