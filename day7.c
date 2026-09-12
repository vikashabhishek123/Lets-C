#include <stdio.h>
int main(){
    int num;
    int table;
    printf("Please enter the number\n");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        table=num*i;
        printf("%d\n",table);
    }
    return 0;
}