#include <stdio.h>
#include <math.h>

int main(void)
{
    float x, k = 0, y_old = 0, y_new = 1, z = 1;

    printf("Enter the value of x= \n");
    scanf("%f",&x);

    do {
        y_old = y_new;
        k = k+1;
        z = z*x/k;
        y_new = y_new + z;
    }while (y_old != y_new);

    printf("exp(%f) = %f", x,y_new);

    return 0;
}
