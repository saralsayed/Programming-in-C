#include <stdio.h>
#include <stdlib.h>

/*This program converts lower case letters to upper
case letters and shows their ASCII values*/

int main(void)
{
    char a, b;
    /*a represents the lower case letter while
    b represents the upper case one*/
    printf("Enter a char: \n");
    scanf("%c",&a);
    b='A'+(a-'a');
    printf("%c \t %d \n%c \t %d",a,a,b,b);
    return 0;
}
