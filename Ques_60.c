/*
    Topic :  PROGRAM TO SORT (SELECTION SORT) AN ARRAY.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

// SELECTION SORT


#include<stdio.h>

void selectionSort(int arr[], int N) {
    for (int i = 0; i < N - 1; i++) {

        int min_idx = i;
        for (int j = i + 1; j < N; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    printf("Enter the size of array : ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array : ");
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    selectionSort(arr, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}