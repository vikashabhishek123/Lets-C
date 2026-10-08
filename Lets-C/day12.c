//Here i am going to write a program which check that the given word is palindrome  or not
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int length,i;
    int count=0;

    printf("Please enter the string\n");
    scanf("%s",str);

    length=strlen(str);
    for(i=0;i<length/2;i++){
        if(str[i]!=str[length-i-1]){
            count++;

        }
        

    }
    if(count==0){
            printf("It is palindrome\n");
        }else{
            printf("It is not a palindrome");
        }
    return 0;
}