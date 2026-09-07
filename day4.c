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

//Question2 Here we have to take the age of user and if age is greater than 18 then print you can drive if he is less than 18 then print you cannot drive
#include <stdio.h>

int main() {
    int age;
    char Name[10];

    printf("Please enter your age: ");
    scanf("%d", &age);

    printf("Please enter your name: ");
    scanf("%9s", Name);

    if (age >= 18) {
        printf("You can drive the vehicle");
    } else {
        printf("You cannot drive");
    }

    return 0;
}


//Question3 Same question hai but isme name ke saath ayega like if maine name enter kiya Abhishek so ayega abhishek you can drive
#include <stdio.h>

int main() {
    int age;
    char Name[20];

    printf("Please enter your age: ");
    scanf("%d", &age);

    printf("Please enter your name: ");
    scanf("%19s", Name);

    if (age >= 18) {
        printf("%s, you can drive the vehicle.", Name);
    } else {
        printf("%s, you cannot drive the vehicle.", Name);
    }

    return 0;
}