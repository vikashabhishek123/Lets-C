//in today's video we will dicuss about logical operator

#include <stdio.h>

int main() {
    int age;
    int has_id;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Do you have an ID? (1 for Yes, 0 for No): ");
    scanf("%d", &has_id);

    // AND (&&): Both conditions must be true
    if (age >= 18 && has_id == 1) {
        printf("You can enter.\n");
    }

    // OR (||): At least one condition must be true
    else if (age >= 18 || has_id == 1) {
        printf("You meet at least one requirement.\n");
    }

    // NOT (!): Reverses the condition
    if (!(age >= 18)) {
        printf("You are under 18.\n");
    }

    return 0;
}