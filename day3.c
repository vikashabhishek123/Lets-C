//In this lecture we will solve the question on loops
//Question1 Take number from user till which he wants to print the no.

#include <stdio.h>
int main(){
    int n;
    printf("Please enter the till which you want to print");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        printf("%d\n",i);
    }
    return 0;
}
