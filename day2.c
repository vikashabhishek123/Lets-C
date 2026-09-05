#include <stdio.h>
int main(){
    int a,b,temp;
    scanf("%d %d ", &a, &b);
    printf("the value of a is %d and b %d before swapping",a,b);
    temp=a;
    b=a;
    a=b;
    printf("the value of a and b is %d and %d after swapping",a,b);
    return 0;
}