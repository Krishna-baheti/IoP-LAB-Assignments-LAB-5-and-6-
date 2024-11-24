/*
    Topic : PROGRAM TO SORT (BUBBLE SORT) AN ARRAY
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

// BUBBLE SORT

int main() {
    printf("Enter the size of array : ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array : ");
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    printf("Sorted array is : ");
    for(int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}
