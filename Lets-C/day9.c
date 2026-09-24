//Here we are learning array in c

// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {

    int size;
    printf("Please enter the size of an array");
    scanf("%d",&size);

    int marks[size];
    printf("Please enter he number");
    for(int i =0;i<size;i++){
        scanf("%d",&marks[i]);
    }
    for(int i =0 ; i<size;i++){
        printf("marks[%d] = %d\n", i, marks[i]);
    }
    


    return 0;
}