/*
    Topic : Program to print the pattern
            1
            121
            12321
            1234321
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

// #include<stdio.h>
// int main()
// {
//     printf("Enter the value of number of rows : ");
//     int n;
//     scanf("%d",&n);
//     for(int i = 1; i <= n; i++) // rows
//     {
//         int a = 1;
//         int b = i;
//         for(int j = 1; j <= 2*i - 1; j++) // columns
//         {
            
//             if(j > i)
//             {
//                 printf("%d",b-1);
//                 b--;
//             }
//             else
//             {
//                 printf("%d",a);
//                 a++;
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>

int main() {
    printf("Enter the number of rows : ");
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++) {
        int a = i - 1;
        for(int j = 1; j <= 2*i - 1; j++) {
            if(j > i) {
                printf("%d",a);
                a--;
            } else {
                printf("%d",j);
            }
        }
        printf("\n");
    }
}