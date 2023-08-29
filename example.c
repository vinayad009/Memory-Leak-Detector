#include <stdio.h>
#include <stdlib.h>

int main() {
  // Allocate memory using malloc
  int *ptr1 = malloc(sizeof(int));

  // Allocate memory using calloc
  int *ptr2 = calloc(5, sizeof(int));

  // Initialize the memory allocated by malloc
  *ptr1 = 10;

  // Print the values of the memory allocated by malloc and calloc
  printf("*ptr1 = %d\n", *ptr1);
  for (int i = 0; i < 5; i++) {
    printf("ptr2[%d] = %d\n", i, ptr2[i]);
  }
  //while(1);
  
  free(ptr1);
  free(ptr2);
  return 0;
}

