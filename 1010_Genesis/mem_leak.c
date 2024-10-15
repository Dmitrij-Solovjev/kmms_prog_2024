#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int *foo(int x, int y){
  int *res = malloc(sizeof(int));
  assert(res != NULL); // Или более сложная обработка

  *res = x + y;

  printf("%p\n", res);
  return res;
}

int main (){
   int *p = foo(0, 42);
   printf("%d\n", *p);
//   free(p);
}
