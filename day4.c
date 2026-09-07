//Question1 Here we have to take radius from user and we have to find the area of circle
#include <stdio.h>
float PI=3.14;
int main(){
    float radius,area;
    printf("please enter the radius");
    scanf("%f",&radius);
    area=PI*(radius*radius);
    printf("the area is %f",area);
}