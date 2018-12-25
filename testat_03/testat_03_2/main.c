#include <stdio.h>
#include <stdlib.h>

int main(void){
   double a[3]={1.1,2.2,3.3}; // coordinates of a point a in 3D
   double *b = (double*)malloc(2*sizeof(double)); // memory for a 3D point b
   b[0] = a [0]; // copy point a to b
   b[1] = a [1];
    // project b into the (x,y)-plane
   printf("\n b = (%.2lf,%.2lf,%.2lf) ",b[0],b[1],b[2]);
   printf("\n a = (%.2lf,%.2lf,%.2lf) \n",a[0],a[1],a[2]);
   return 0;
}
