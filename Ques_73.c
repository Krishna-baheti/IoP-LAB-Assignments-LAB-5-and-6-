/*
    Topic : An election is contested by 5 candidates. The candidate is numbered 
            are 1 to 5 and the voting is done by marking the candidate number on 
            the ballot paper. 
            Write a program to read the ballots and count the votes cast for each 
            candidate using an array variable count. In case, a number, read is 
            outside the range 1 to 5, the ballot should be considered as a 
            ‘spoilt ballot’ and the program should also count the number of 
            spoilt ballots
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
#define population 50

int main() {
    int candidate_number;
    int ballot[6];
    for(int i = 0; i < 6; i++) {
        ballot[i] = 0;
    }
    for(int i = 1; i <= population; i++) {
        printf("\nAssuming adult population to be 50\n");
        printf("Vote by entering candidate number\n\n");
        printf("Enter the candidate you want to vote for : ");
        scanf("%d",&candidate_number);
        if(candidate_number == 1) {
            ballot[0]++;
        } else if(candidate_number == 2) {
            ballot[1]++;
        } else if(candidate_number == 3) {
            ballot[2]++;
        } else if(candidate_number == 4) {
            ballot[3]++;
        } else if(candidate_number == 5) {
            ballot[4]++;
        } else {
            ballot[5]++;
        }
    }

    printf("\n\n\n\nNumber of ballots of candidate 1 : %d\n\n",ballot[0]);
    printf("Number of ballots of candidate 2 : %d\n\n",ballot[1]);
    printf("Number of ballots of candidate 3 : %d\n\n",ballot[2]);
    printf("Number of ballots of candidate 4 : %d\n\n",ballot[3]);
    printf("Number of ballots of candidate 5 : %d\n\n",ballot[4]);
    printf("Number of spoilt ballots : %d\n\n",ballot[5]);
    return 0;
}