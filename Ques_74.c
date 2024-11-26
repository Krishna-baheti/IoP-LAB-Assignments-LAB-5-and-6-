/*
    Topic : Given are one dimensional arrays A and B which are sorted in 
            ascending order. Write a program to merge them into a single sorted 
            array C that contains every item from array A and B, in ascending order
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main() {
   printf("Enter size of array one : ");
   int n;
   scanf("%d",&n);
   printf("Enter array one in sorted format : ");
   int arr[n];
   for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
   }


   printf("Enter size of array two : ");
   int n1;
   scanf("%d",&n1);
   printf("Enter array two in sorted format : ");
   int brr[n1];
   for(int i = 0; i < n1; i++) {
        scanf("%d",&brr[i]);
   }

    int crr[n + n1];
    int j = 0;
    for(int i = 0; i < (n + n1); i++) {
        if(i < n) {
            crr[i] = arr[i];
        } else {
            crr[i] = brr[j];
            j++;
        }
    }

    // now sort crr array using BUBBLE SORT

   for(int i = 0; i < n + n1 - 1; i++) {
        for(int j = 0; j < n + n1 - 1 - i; j++) {
            if(crr[j] > crr[j + 1]) {
                // swap crr[j] and crr[j + 1]
                int temp = crr[j];
                crr[j] = crr[j + 1];
                crr[j + 1] = temp;
            }
        }
    }


    // print crr or merged array in sorted format

    printf("\nMerged array from array one and two is : ");
    for(int i = 0; i < (n + n1); i++) {
        printf("%d ",crr[i]);
    }
    return 0;
}
