// Question1 WAP which takes two number from users and swap it .
#include <stdio.h>
int main(){
    int a,b,temp;
    printf("Please enter two numbers\n");
    scanf("%d %d", &a, &b);
    printf("the value of a is %d and b is %d before swapping \n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("the value of a is %d and b is %d after swapping",a,b);
    return 0;
}

//Question 2 same problem but we have to do this without using the third variable
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter a and b:\n");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

//Question write a program which take input in inches and convert into feet and inches

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
   int inches,feet,remaining_inches;
   printf("Please enter how many inches");
   scanf("%d",&inches);
   feet=inches/12;
   remaining_inches=inches%12;
   printf("In %d inches there are %d feet and %d inches",inches,feet,remaining_inches);

    return 0;
}