#include <stdio.h>

int main(){
    FILE *file_pointer;
    file_pointer=fopen("abhi.txt","r");

    if(file_pointer==NULL){
        printf("sorry file can't open");
        return 1;
    }
    return 0;

}