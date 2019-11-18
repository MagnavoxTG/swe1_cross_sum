// estimated time = 15min
// actual time = 30min

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// calculates cross sum
int cross_sum(long long int n);

void main() {
    int x = 0;
    char intreadout[255] = "";
    long long int number = 0;

    while (x != 1) {
        // printf shows a message asking you to enter a positive number
        printf("\nPlease enter a positive number (f.e. 202): ");
        //scanf writes the input into a string (char array)
        scanf("%s", intreadout);
        //gets(intreadout);
        // strspan checks how many of the specified character are inside the string and gives an integer
        // strlen checks how long the string (char array) is and gives an integer
        // if they are the same then there are only allowed characters in the string
        if (strspn(intreadout, "0123456789") == strlen(intreadout)) {
            number = (long long int)atoll(intreadout);
            // Prints the return of cross_number
            printf("The Cross-Sum of the Number %lli: = %i\n", number, cross_sum(number));

            //breaks while
            x = 1;
        } else {
            printf("invalid input");
        }
    }
}

int cross_sum(long long int n) {
    long long int new_number = 0;

    // goes through the int and adds up every digit (in reverse order)
    while(n)
    {
        new_number += n % 10;
        n /= 10;
    }
    return new_number;
}