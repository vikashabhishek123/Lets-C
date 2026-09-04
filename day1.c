//today we will discuss about switch statement it is also like if, else-if
//here i am going to create a program which takes alphabetical input from user and tells them that given input is vowel or not;

#include <stdio.h>
int main(){
    char ch;
    printf("please enter any alphabet");
    scanf(" %c",&ch);

    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("this is vowel");
            break;

        default:
            printf("this is consonant");


    }
    return 0;

}


//Question 1: Check whether a number is positive, negative, or zero using switch

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num > 0) {
        case 1:
            printf("Positive number");
            break;

        case 0:
            switch (num < 0) {
                case 1:
                    printf("Negative number");
                    break;

                case 0:
                    printf("Zero");
                    break;
            }
            break;
    }

    return 0;
}