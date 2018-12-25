// module math_fun.c
// module global definition of the variable factor
static double factor = 100.0;
// module global definition of the function my_max
static double my_max(double x, double y){return (x>y)?x:y;}
// program global function definitions
double my_min(double x, double y){return (x<y)?x:y;}
double my_abs(double x){return my_max(x,-x);}
double my_proz(double x,double p){return x*p/factor;}
