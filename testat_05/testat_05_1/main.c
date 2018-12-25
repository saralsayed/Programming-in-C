#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c;
    char w[20];
    int m, n;
    printf("\n Enter a character:  ");
    scanf("%c",&c);
    printf("Enter a Word:  ");
    scanf("%s",w);
    printf("Enter an integer:  ");
    scanf("%d",&m);
    printf("and another one:  ");
    scanf("%d",&n);

    //a
    printf("Is %c a capital letter ?\n",c);
    if (c<=90)
    {
        if (c>=65)
        {
            printf(" Answer is: 1\n");
        }

    }
    else
    {
        printf("Answer: 0\n");
    }
    //b

    printf("Is %d contained in [1,20] and is %c character number %d of %s in this case ?\n",m,c,m,w);

    if ((m<=21)&&(m>=1)){
            if (c==w[m-1]){
                printf("Answer: 1\n");
            }
        }


    else
    {
        printf("Answer: 0\n");
    }


    //c

    printf("Is %d divisible by %d or is %d divisible by %d ?\n",m,n,n,m);
    if (!(m%n) && !(n%m))  //if its not remainder then m is divisable by n and vice versa
    {
        printf(" Answer is: 1\n");
    }
    else
    {
        printf("Answer: 0\n");
    }
    // d)

    printf("Does %d = %d and %d*%d < 17 hold true ?\n",m,n,n,n);
    if ((m == n) && (n*n<17))
    {
        printf(" Answer is: 1\n");
    }
    else
    {
        printf("Answer: 0\n");
    }
    // e)

    printf("Is one of the inequalities %d - %d > %d + %d and %d*%d >= %-d*%d wrong?\n",m,n,m,n,m,n,m,n);
    if (!(n-m > n+m) && !(m*n >= n*m))
    {
        printf(" Answer is: 1\n");
    } //once with yes and once with no
    else
    {
        printf("Answer: 0\n");
    }
    //f

    printf("Does the floating-point evaluation of %d/%d = %d have first decimal digit 2 ?",m,n,m/n);
    float mn=0;
    mn=(float)m/n


    if () {
        printf(" Answer is: 1\n");
    } //once with yes and once with no
    else {
        printf("Answer: 0\n");
    }


    return 0;
}

















