//today we will discuss about arrays question
//Question 1 WAP that find the largest and the smallest number


#include <stdio.h>

int main() {
    int arr[] = {12, 45, 7, 89, 23};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }

        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    return 0;
}


//Question2 Write a C program to count the total number of even and odd elements in an array.

#include <stdio.h>

int main() {
    int arr[] = {2, 7, 4, 9, 6, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    int even = 0, odd = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);

    return 0;
}