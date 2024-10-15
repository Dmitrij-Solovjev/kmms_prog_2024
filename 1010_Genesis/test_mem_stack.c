#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

const int ALLOC_SIZE = 100000;
const int MAX_ITER = 83; // try 82


void foo(int counter){
  char s[ALLOC_SIZE];
  if (counter > 0){
    printf(".");
    foo(counter - 1);
  }
}

int main (){
  foo(MAX_ITER);
}
