/*
    Topic :  PROGRAM TO SORT (SELECTION SORT) AN ARRAY.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

// SELECTION SORT

#include<stdio.h>

int main() {
    printf("Enter the size of array : ");
    int n;
    scanf("%d",&n);

    printf("Enter array elements : ");

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < n - 1; i++) {
        // we find minimum index

        int min = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[min] > arr[j]) {
                min = j;
            }
        }

        // we swap the minimum with the first value of that iteration
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for(int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
}
