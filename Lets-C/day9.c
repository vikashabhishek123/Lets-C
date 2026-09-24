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





#include <stdio.h>

int main() {
  // An array storing different ages
  int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
 
  float avg, sum = 0;
  int i;
  
  // Get the length of the array
  int length = sizeof(ages) / sizeof(ages[0]);
    
  // Loop through the elements of the array and accumulate the sum
  for (i = 0; i < length; i++) {
    sum += ages[i];
  }
  
  // Calculate the average by dividing the sum by the length
  avg = sum / length;
  
  // Print the average
  printf("The average age is: %.2f", avg);
  
  return 0;
}