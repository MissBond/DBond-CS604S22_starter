//Any stack address (adderess of local vars, address of parameters, and array on stack)
//should not  be returned to caller because where the address points to
//will be recycled right after callee returns
//The following code suffers this use-garbage-value memory bug and needs to be fixed
//TODO: Please fix the memory leak
//Your code will be tested against Valgrind to ensure there are no memory violations

#include <stdio.h>
#include <stdlib.h>

int * makearray(int size, int base){

  int * array = malloc(sizeof(int )*size);
  int j;

  for(j=0;j<size;j++)
    array[j] = base*=2; //doubling base

  return array;
}

int main(){
  int * a1 = makearray(5,2);
  int * a2 = makearray(10,3);
  int j, sum=0;

  if (a1 == NULL || a2 == NULL) {
    printf("Bad malloc error\n");
    exit(1);
  }

  for(j=0;j<5;j++){
    printf("%d ",a1[j]);
    sum+=a1[j];
  }
  printf("\n");

  for(j=0;j<10;j++){
    printf("%d ",a2[j]);
    sum+=a2[j];
  }
  printf("\n");

  printf("SUM: %d\n", sum);
  free(a1);
  a1 = NULL;
  free(a2);
  a2 = NULL;
}
