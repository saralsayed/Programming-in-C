#include <stdio.h>
#include "my_first_headerfile.h"
#define N 3

int main(void){
  float a[N],b[N],c[N];
  read_array(a,N,"a");
  read_array(b,N,"b");
  add_arrays(a,b,c,N);
  print_array(c,N,"c");
  return 0;
}
