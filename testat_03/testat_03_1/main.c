#include <stdio.h>
#include <stdlib.h>

int main(void){
   int val=2;
   int *x = &val;
   *x = 100;
   printf("\n *x = %d \n &x = %p \n sizeof(x) = %lu \n",
   *x,(void*)x,sizeof(x));
   return 0;
 }
