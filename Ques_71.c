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
    /// given array int arr[5] = {1,2,3,4,5,6,7,8};
    // rotate it 3 times

    int arr[8] = {8,7,6,5,4,3,1,2};
    int flag = 0, pivot; // to find pivot element

    for(int i = 0, j = 7; i <= j; i++, j--) {
        if(arr[i] < arr[i + 1]) {
            pivot = arr[i];
            flag = 1;
            break;
        }
        if(arr[j] < arr[j - 1]) {
            pivot = arr[j];
            flag = 1;
            break;
        }
    }

    printf("Pivot element is %d\n",pivot);
    return 0;
}


