/*
    Topic : Write a program in C to find the pivot element of a sorted and 
            rotated array using binary search. Pivot element is the only element 
            in input array which is smaller than its previous element. A pivot 
            element divided a sorted rotated array into two monotonically 
            increasing array.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main() {
    printf("Enter the size of array : ");
    int n;
    scanf("%d",&n);

    int arr[n];
    printf("Enter rotated sorted array : ");

    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    // we know that the pivot element is the minimum element
    int pivot = arr[0];

    for(int i = 0; i < n; i++) {
        if(arr[i] < pivot) {
            pivot = arr[i];
        }
    }

    printf("Pivot element is : %d\n",pivot);
}
