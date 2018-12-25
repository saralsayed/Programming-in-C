#include <stdio.h>
#include <math.h>
#include "vector_functions1.h"

int main(void)
{
    int i,n;
    printf("Give the number of forces: n = ");
    scanf("%d", &n);
    i = 0;
    fflush(stdin);
    float forces[n][3], F[3], Fr, po[n][3], Mo[3], Mr[3], M;
    for(i=0;i<3;i++) F[i]=0;
    i=0;
    Fr = 0;
    while(i<n)
    {
        printf("\nF%d[1] = ",i+1);
        scanf("%f",&forces[i][0]);
        printf("F%d[2] = ",i+1);
        scanf("%f",&forces[i][1]);
        printf("F%d[3] = ",i+1);
        scanf("%f",&forces[i][2]);
        vecsum(forces[i],F,F);
        i++;
    }
    for(i=0;i<3;i++) Mo[i]=0;
    for(i=0;i<3;i++) Mr[i]=0;
    i=0;
    while(i<n)
    {
        printf("\nx-direction for F%d = ",i+1);
        scanf("%f",&po[i][0]);
        printf("y-direction for F%d = ",i+1);
        scanf("%f",&po[i][1]);
        printf("z-direction for F%d = ",i+1);
        scanf("%f",&po[i][2]);
        crossprod(po[i],forces[i],Mo);
        vecsum(Mo,Mr,Mr);
        i++;
    }
    printf("\nFr = (%0.2f, %0.2f, %0.2f)",F[0], F[1], F[2]);
    vecnorm(F,&Fr);
    printf("\n|Fr| = %0.2f", Fr);
    printf("\nMr = (%0.2f, %0.2f, %0.2f)",Mr[0], Mr[1], Mr[2]);
    vecnorm(Mr,&M);
    printf("\n|Mr| = %0.2f", M);
    return 0;
}
