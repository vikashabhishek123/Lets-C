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


//Question2 Take input from user and add all numbers
#include <stdio.h>
int main(){
    int a;
    int sum=0;
    printf("Please enter the number");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        sum=sum+i;

    }
    printf("The sum of total number is %d",sum);
    return 0;
}