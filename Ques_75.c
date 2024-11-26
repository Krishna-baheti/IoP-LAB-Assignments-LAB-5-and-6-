/*
    Topic : 

    The annual examination results of 10 students are tabulated as follows:
       Roll No.     Subject1      Subject2       Subject3
       .
       .
       .
       .____________________________________________________________________

Write a program to read the data and determine the following:
(a) Total marks obtained by each student.
(b) The highest marks in each subject and the Roll No. of the student who 
secured it.
(c) The student who obtained the highest total marks.

Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main() {
    int arr[10][4];
    printf("\nEnter student data : \n\n");
    for(int i = 0; i < 10; i++) {
        printf("Enter details of student %d : \n",i+1);
        for(int j = 0; j < 4; j++) {
            if(j == 0) {
                printf("Enter roll no. : ");
                scanf("%d",&arr[i][j]);
            } else if(j == 1) {
                printf("Enter marks in Subject 1 : ");
                scanf("%d",&arr[i][j]);
            } else if(j == 2) {
                printf("Enter marks in Subject 2 : ");
                scanf("%d",&arr[i][j]);
            } else if(j == 3) {
                printf("Enter marks in Subject 3 : ");
                scanf("%d",&arr[i][j]);
            }
        }
        printf("\n");
    }

    // array storing total marks of each student
    int total_marks[10];
    for(int i = 0; i < 10; i++) {
        int sum = 0;
        for(int j = 0; j < 4; j++) {
           if(j != 0) {
            sum += arr[i][j];
           }
        }
        total_marks[i] = sum;
    }

    printf("\n\nTotal marks of each student : \n\n\n");
    for(int i = 0; i < 10; i++) {
        printf("Total Marks of student %d is %d\n", i + 1, total_marks[i]);
    }

    int max = total_marks[0], topper = 1;
    for(int i = 0; i < 10; i++) {
        if(total_marks[i] > max) {
            max = total_marks[i];
            topper = i + 1;
        }
    }

    printf("\n\nStudent who obtained highest total marks has roll number : %d\n\n",topper);

    int max1 = arr[0][1], max2 = arr[0][2], max3 = arr[0][3];
    int sb1, sb2, sb3;

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 4; j++) {
            if(j != 0) {
                if(arr[i][1] > max1) {
                    max1 = arr[i][1];
                    sb1 = arr[i][0];
                }
                if(arr[i][2] > max2) {
                    max2 = arr[i][2];
                    sb2 = arr[i][0];
                }
                if(arr[i][3] > max3) {
                    max3 = arr[i][3];
                    sb3 = arr[i][0];
                }
            }
        }
    }
    printf("For Subject 1 : \n");
    printf("Highest marks : %d\n",max1);
    printf("Obtained by student having roll number : %d\n",sb1);
    printf("\n");
    printf("For Subject 2 : \n");
    printf("Highest marks : %d\n",max2);
    printf("Obtained by student having roll number : %d\n",sb2);
    printf("\n");
    printf("For Subject 3 : \n");
    printf("Highest marks : %d\n",max3);
    printf("Obtained by student having roll number : %d\n\n\n",sb3);
}
