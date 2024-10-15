#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int *foo(int x, int y){
  int *res = malloc(sizeof(int));
  assert(res != NULL); // Или более сложная обработка

  *res = x + y;

  //printf("%p\n", res);
  return res;
}

int main (){
  for (int i=0;;i++){
    int *p = foo(0, 42);
    if (i % 1000 == 0)
      printf("%d\n", i);
  }
//printf("%d\n", *p);
//   free(p);
}
