//Solving questions on array

//Question 1
//WAP program to add two arrays
#include <stdio.h>
int main(){
    int a[5],b[5],sum[5];

    //Input the first array element
    printf("Please enter the elements of first array");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    //Input the second araay element
    printf("Please enter the element of second element");
    for(int i=0;i<5;i++){
        scanf("%d",&b[i]);
    }

    //addition of both arrays
    for(int i=0;i<5;i++){
        sum[i]=a[i]+b[i];
    }
    //print the result
    printf("Addition of two arrays");
    for(int i=0;i<5;i++){
        printf("%d",sum[i]); 
       }
       return 0;
}
