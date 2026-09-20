//Today we will find the factorial using recursion
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case
    }

    return n * factorial(n - 1);  // Recursive call
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %d", factorial(n));

    return 0;
}