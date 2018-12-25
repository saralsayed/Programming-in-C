#include <stdio.h>
#include <stdlib.h>

int main (void) {

    unsigned short n, k, a;
    printf("Enter a natural!");
    scanf("&hu",&n);
    n +=1;
    char str[n]; //={"schulfach"};
    printf("Enter characters of n-length");
    scanf("%s",str);
    printf("%s\n",str);
    printf("Enter an integer k < n!");
    scanf("%hu",&k);
    k-- ;
    printf("%s\n",str+k);
    printf("Please enter an int from 0 - 127!\n");
    scanf("%hu",&a);
    str[k]=(char)a;
    printf("&s\n",str);
    return 0;
}
