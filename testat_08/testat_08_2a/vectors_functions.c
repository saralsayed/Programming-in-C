// I have to read two vectors in one function and then
// write a function for every operation
// another 2 functions to display the results


#include <stdio.h>
#include <math.h>
#define N 3


void vecsum(double *x, double *y, double *z){
    unsigned i ;
    for (i=0;i<N;i++){
        z[i]=x[i]+y[i];

    }
    return;
}


void veccross(double *x, double *y, double *z){
    z[0]=x[1]*y[2]-x[2]*y[1];
    z[1]=x[2]*y[0]-x[0]*y[2];
    z[2]=x[0]*y[1]-x[1]*y[0];
    return;
}


double vecinner(double *x, double *y){

    double s=0;
    s = x[0]*y[0]+x[1]*y[1]+x[2]*y[2];
    return s;
}

double vecnorm(double *x, double *y){
    double v;
    v= sqrt(vecinner(x, y));
    return v;
}

int printv(double *x, char *name){
    unsigned i;
    printf("Vector %s:\n",name);
    for (i=0;i<N;i++){
        printf("%.2f\t",x[i]);
    }
    printf("\n\n");
    return i;
}

int printd(double x, char *name){
    unsigned i=1;
    printf("%s:\n",name);
    printf("%.2lf",x);
    printf("\n\n");
    return i;
}

int scan(double *x, char *name){
    unsigned i;
    for (i=0;i<N;i++){
        printf("Enter Value %d of Vector %s: \n",i+1,name);
        scanf("%lf",&x[i]);
    }
    return i;
}
