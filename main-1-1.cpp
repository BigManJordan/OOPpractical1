#include <stdio.h>
#include <stdlib.h>
#include "function-1-1.cpp"

extern int sum_array(int*, int);

int main(void){
  
  int array[5] = {1,2,3,4,5};
  
  int sum = sum_array(array,5);
  printf("sum = %d\n", sum);
}
