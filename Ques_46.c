/*
  Topic : (USING MULTIDIMENSIONAL ARRAYS):
  Let’s move away from vegetables and turn to a more practical application. You 
 can use arrays in a program to avoid a significant health and safety issue.
 As you may know, wearing a hat that is too large is dangerous. It can fall over
 your eyes, so you may bump into things, causing injury or even death. Equally, 
 wearing a hat that is too small can result in persistent headaches and make you
 look foolish. This invaluable program will use arrays to work out your correct
 hat size in the units commonly used in the United States and the United 
 Kingdom, where hat sizes typically vary from 6 1/2 to 7 7/8. Other countries 
 have more transparent hat sizes that cause fewer problems at home, but if you
 are a foreign visitor to the United States or the United Kingdom, buying a 
 hat while you are away can be even more hazardous. You just enter the 
 circumference of your head, in inches of course, and your hat size will be displayed instantly:
 Know your hat size - if you dare...

 Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
 Description : 
*/

#include <stdio.h>

int main() {
    float circumference;
    
    // defining hat sizes
    float hatSizes[8][3] = {
        // printing according to different hat sizes

        
        {6.5, 20.50, 21.00},  // Size 6 1/2
        {6.75, 21.00, 21.25}, // Size 6 3/4
        {7.0, 21.25, 21.50},  // Size 7
        {7.125, 21.50, 21.75},// Size 7 1/8
        {7.25, 21.75, 22.00}, // Size 7 1/4
        {7.375, 22.00, 22.25},// Size 7 3/8
        {7.5, 22.25, 22.50},  // Size 7 1/2
        {7.625, 22.50, 22.75} // Size 7 5/8
    };

    printf("Enter your head circumference in inches: ");
    scanf("%f", &circumference);

    int sizeFound = 0; // Flag to check if size is found

    for (int i = 0; i < 8; i++) {
        if (circumference >= hatSizes[i][1] && circumference < hatSizes[i][2]) {
            printf("Your hat size is: %f\n", hatSizes[i][0]);
            sizeFound = 1;
            break;
        }
    }

    if(sizeFound == 0) {
        printf("Given circumference doesn't match any standard hat size.\n");
    }
    return 0;
}
