//Logical OR Operator
#include <stdio.h>
int main(){
    int age;
    printf("Please enter the age");
    scanf("%d",&age);
    if (age > 18 || age < 65) {
    // Executes if either condition is true
    printf("You are eligible");
}else{
    printf("You are not eligble");
}
return 0;
}

//Logical AND

#include <stdio.h>

int main() {
    int age;

    printf("Please enter your age: ");
    scanf("%d", &age);

    if (age >= 18 && age <= 65) {
        printf("You are eligible");
    } else {
        printf("You are not eligible");
    }

    return 0;
}


//Logical NOT 

#include <stdio.h>

int main() {
    int age;

    printf("Please enter your age: ");
    scanf("%d", &age);

    if (!(age >= 18)) {
        printf("You are not eligible");
    } else {
        printf("You are eligible");
    }

    return 0;
}
