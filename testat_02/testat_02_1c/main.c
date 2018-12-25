#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x;
    float y,a,b,c;
    x = 6.0/7;
    y = 2.85/3.56;
    a = x+y;
    b = x-y;
    c = x*y;
    printf("\n %+20.4le \n %+20.4le \n %+20.4le \n", a,b,c);
    return 0;
}
