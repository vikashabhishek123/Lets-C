/*
Today we will solve the question on for loop 
*/

//Question1 Write a C program to print numbers from 1 to 20 using a for loop.
#include <stdio.h>

int main() {
    for(int i = 1; i <= 20; i++) {
        printf("%d\n", i);
    }

    return 0;
}

//Question2 Write a C program to print all even numbers from 1 to 50 using a for loop.
#include <stdio.h>

int main() {
    for(int i = 1; i <= 50; i++) {
        if(i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

//Question3  Write a C program that takes a number n from the user and finds the sum of numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}