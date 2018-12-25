#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 27;
    float y = -1.5;

    char c1 = 'U', c2;
    char str[]="String",*s1=str,*s2;

    y++;
    printf("\n y = %f",y);
    x %= 7;
    printf("\n x = %d",x);
    x *= 6;
    printf("\n %d",x/13);

    c2 = c1--;
    printf("\n c1 = %c, c2 = %c",c1,c2);
    s2 = s1++;
    printf("\n s1 = %s, s2 = %s ",s1,s2);
    *s1 = *s2;
    printf("\n *s1 = %c, *s2 = %c \n",*s1,*s2);

    /* %c can be a character or no. but not as an integer
    but as an ASCII code. */
    return 0;
}
