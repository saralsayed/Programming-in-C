// module main.c
#include <stdio.h>    // Standard header files are encolsed by <...>.
#include "math_fun.h" // Private header files are enclosed by "...".
extern unsigned int cmp_positive; // declaration of a program global variable cmp_positive
                                  // its definition is in the module string_fun.c
extern unsigned int string_compare(char* s1,char* s2); // direct declaration of a program global
        // function without header file, its definition is in module string_fun.c
void func_1(void){
  int i=1; // i has local scope and automatic (non static) extent.
  printf(" i = %d \n",i);
  i++;
  return;
}
void func_2(void){
  static int j=1; // j has local scope but static extent.
  printf(" j = %d \n",j);
  j++;
  return;
}
int main(void)
{// begin of an outer block which is the function block in this case
  double x,y;
  char s1[100],s2[100];
  auto int a=1; // superfluous use of "auto"
  int b=2;
  unsigned int c;
  { // begin of an inner block
    int a=-1; // new block local variable a
    printf(" a*b = %d \n",a*b); // inner a is visible, outer b is also visible
  } // end of inner block
  printf(" a*b = %d \n",a*b); // outer a is visible

  func_1();func_1();func_1(); // Since i has automatic extent, its value does not exceed 1.
  func_2();func_2();func_2(); // Since j has static extent, its value grows
                              // with each function call.
  // calls of functions from math_fun.c
  printf("\n x = ");scanf("%lf",&x);
  printf(" y = ");scanf("%lf",&y);
  printf(" |%lf| = %lf \n",x,my_abs(x));
  printf(" min(%lf,%lf) = %lf\n",x,y,my_min(x,y));
  printf(" %lf * %lf %% = %lf\n",x,10.0,my_proz(x,10.0));
  // call of the function from string_fun.c
  printf("\n s1 = ");scanf(" %s",s1);
  printf(" s2 = ");scanf(" %s",s2);
  c=string_compare(s1,s2);
  if(c==cmp_positive)  // access to the program global variable cmp_positive
    printf(" s1 equals s2.");
  else
    printf("\n s1 does not equal s2.");
  return 0;
}// end of outer block
