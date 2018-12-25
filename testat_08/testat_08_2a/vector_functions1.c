
void vecsum(float a[3], float b[3], float c[3])
{
    unsigned int i;
    for(i=0;i<3;i++)
        c[i]=a[i]+b[i];
    return;
}

void crossprod(float a[3], float b[3], float c[3])
{
    c[0]=a[1]*b[2]-a[2]*b[1];
    c[1]=a[2]*b[0]-a[0]*b[2];
    c[2]=a[0]*b[1]-a[1]*b[0];
    return;
}

void dotprod(float a[3], float b[3], float *s)
{
    unsigned int i;
    *s=0;
    for(i=0;i<3;i++)
        *s+=a[i]*b[i];
    return;
}
#include <math.h>
void vecnorm(float a[3], float *l)
{
	int i;
	*l = 0;
	for(i=0;i<3;i++)
		*l += a[i]*a[i];
	*l = sqrt(*l);
	return;
}
