#include<stdio.h>
#include<math.h>

double fun_f(double k,double r) { //k is coefficient, r is resistance
    double f;
    f = k/(1+k*r-pow(k,2)*r);
    return f;
}

double fun_g(double u,double r) {
    double g;
    if(r!=0&&u!=0) {
            g= ((u*r-1)+ sqrt((u*r-1)*(u*r-1)+4*pow(u,2)*r))/(2*u*r);
    }
    else {
       g=u;
    }
    return g;
}

void table (double k, double u, double r, double f1, double f2, double g1, double g2)
{   //el valor de r no cambia por eso le asignamos solo un varaible llamado b
    printf("k\t| r\t| f(k,r)\t| g(f(k,r))\t|\n"); //first table
    printf("-----------------------------------------------\n");

    while(r<=5) // b (r) tiene q ser igual o menor q 5
    {
        while(k<=1) //a1 (k) tiene q ser igual o menor q 1
        {
            f1= fun_f(k,r); //assigning a1 to k and b to r
            g1= fun_g(f1,r); //assigning c1 to u and b to r
            printf("%0.2f\t| %0.2f\t| %0.2f\t\t| %0.2f\t\t|\n", k,r,f1,g1);
            k= k+0.1; //incrementar el valor de k (a1) por 0,1
        }
        r+=1; //incrementar el valor de r por 1
        k=0; //starting point of k
    }
    r=0; //starting point of r
    printf("\n\n");

    printf("u\t| r\t| g(u,r)\t| f(g(u,r))\t|\n"); //second table
    printf("-----------------------------------------------\n");
    while(r<=5)
    {
        while(u<=5)
        {
            f2= fun_g(u,r);
            g2= fun_f(f2,r);
            printf("%0.2f\t| %0.2f\t| %0.2f\t\t| %0.2f\t\t|\n", u,r,f2,g2);
            u= u+1;
        }
        r+=1;
        u=0;
    }
    r=0;
}

// plot characteristic curve of voltage divider with fixed resistance ratio r:=R/R3
void plot(double r)          // resistance ratio r:=R/R3
{
    int xmax=100;              // length of x-axis
    int ymax=40;               // length of y-axis
    int x,y;                   // loop counter for values on x- and y-axis, respectively
    int xk;                    // x value for k in [0,1], xk in [0,xmax], xk:=k*xmax
    double u;                  // voltage ratio u:=U3/U
    char ch;                   // character for plotting: either ' ' (space) or '-' (horizontal line)
    double k;                  // resistance scaling factor
    printf("\n\n");
    for(y=0; y<=ymax; y++)
    {
        u=1-(1.0*y)/ymax;        // 0 <= u <= 1
        k=fun_g(u,r);         // compute k corresponding to u and r
        xk=k*xmax;               // transformation to integer x value for plotting
        if(y<ymax)
            ch=' ';                // space
        else
            ch='-';                // horizontal line for x-axis
        for(x=0; x<=xmax; x++)
        {
            if(x==xk)
                printf("+");         // plot the measurement point (k,u) in transformed coordinates (xk,y)
            else
            {
                if(x==0)
                    printf("|");       // vertical line for y-axis
                else
                    printf("%c",ch);   // horizontal line for x-axis, or space
            }
        }
        printf("\n");            // new line for new y value
    }
    printf("\n\n");
    return;
}

int main (void)
{
    double k=0,fkr=0,gfkr=0,gur=0,fgur=0,u=0,r=0; //refers to the table a1,a2, ...
    char a;
    table(k,u,r,fkr,gur,gfkr,fgur);

    do
    {
        printf("Plot characteristic curve of voltage divider ? (y/n) ");
        scanf("%c",&a);
        switch(a) {
        case'y':
            printf("Resistance Ratio r= ");
            scanf("%lf",&r);
            plot(r);
            break;
        case'n':
            break;
        }
    }
    while(a!='n');
    return 0;

}
