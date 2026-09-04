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