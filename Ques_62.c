/*
    Topic : PROGRAM TO REVERSE AN ARRAY
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
int main()
{
    printf("Enter the size of array : ");
    int n;
    scanf("%d",&n);
    printf("Enter the elements of array : ");
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0, j = n - 1; i <= j; i++, j--) {
        // swap arr[i] and arr[j]
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("Reversed array is : ");
    for(int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}