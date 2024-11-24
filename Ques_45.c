/*
Topic : (A GUESSING GAME): With this program the user has to guess a number
       that the program has picked as the lucky number. It uses one for loop and
       plenty of if statements. I’ve also thrown in a conditional operator,
       just to make sure you haven’t forgotten how to use it!
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/


#include<stdio.h>
#include<stdlib.h>

#define RAND_MAX 100 // to generate random number between 0 to 100

int main()
{
    int x = rand();
    printf("Guess the number between 0 to 100 : ");
    int n;
    scanf("%d",&n);
    do {
        if(n > x) {
            printf("Try smaller number\n");
            scanf("%d",&n);
        } else {
            printf("Try bigger number\n");
            scanf("%d",&n);
        }
    } while(n != x);
    printf("Congrats!.. You got the number\n");
    return 0;
}