/*
    Topic : Program to print the pattern
            *
            ***
            *****
            *******
            *****
            ***
            *
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/


#include<stdio.h>

int main() {
    printf("Enter the number of rows (odd) : ");
    int n;
    scanf("%d",&n);
    n = n / 2;
    for(int i = 1; i <= n + 1; i++) {
        for(int j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for(int i = n; i >= 1; i--) {
        for(int j = 2*i - 1; j >= 1; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}