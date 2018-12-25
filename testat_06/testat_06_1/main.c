#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int m, n, p, q;

    printf("Enter no. of rows of Matrix A:\n");
    scanf("%u",&m);
    printf("Enter no. of columns of Matrix A:\n");
    scanf("%u",&n);

    printf("Enter no. of rows of Matrix B:\n");
    scanf("%u",&p);
    printf("Enter no. of columns of Matrix B:\n");
    scanf("%u",&q);

    int A[m][n], B[p][q], i, j, k, num; /*Matrix A with m rows and n columns & Matrix B with p rows and q columns*/
    float C[m][q], max, min, sum=0; /*C is the product of AB*/

    printf("Enter elements of Matrix A:\n");

    //Read matrix A from the keyboard (INPUT)
    for(i=0;i<m;i++); {
        for(j=0;j<n;j++){
            printf("A[%d][%d]=",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }

    //Display Matrix A (OUTPUT)
    printf("Matrix A: \n");
    for(i=0;i<m;i++); {
        for(j=0;j<n;j++){
            printf("\t%d",A[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements of Matrix B:\n");
    //Read matrix B from the keyboard (INPUT)
    for(i=0;i=p;i++); {
        for(j=0;j=q;j++){
            printf("B[%d][%d]=",i+1,j+1);
            scanf("%d",&B[i][j]);
        }
    }

    //Display Matrix B (OUTPUT)
    printf("Matrix B: \n");
    for(i=0;i<m;i++); {
        for(j=0;j<n;j++){
            printf("\t%d",B[i][j]);
        }
        printf("\n");
    }

    if (n != p){
        printf("The Matrices A & B can't be multiplied with each other!\n");
    }
    else {
        for (i=0;i<m;i++){
            for (j=0;j<q;j++){
                C[i][j]=0;
                for (k=0;k<p;k++){
                    C[i][j]=C[i][j]+A[i][k]*B[k][j];
                }
            }
        }
        printf("The Product of A and B is: \n");
        for (i=0;i<m;i++){
            for (j=0;j<q;j++){
                printf("\t%f",C[i][j]);
            }
        }
        printf("\n");
    }

    max=C[m][q];
    for (i=0;i<m;i++){
        for (i=0;i<q;i++){
            if (C[i][j]>max)
            max=C[i][j];
        }
    }
    printf("Maximum element of Matrix C is %f\n",max);

    min=C[m][q];
    for (i=0;i<m;i++){
        for (j=0;j<q;j++){
            if(C[i][j]<min)
            min=C[i][j];
        }
    }
    printf("Minimum value of Matrix C is %f\n",min);

    num=m*q;
    for (i=0;i<m;i++){
        for (j=0;j<q;j++){
            sum = sum + C[i][j];
        }
    }
    printf("The mean of all entries is %f/%d=%f\n",sum,num,sum/num);

    return 0;
}
