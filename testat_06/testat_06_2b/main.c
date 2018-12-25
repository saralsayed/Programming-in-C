#include <stdio.h>
#include <stdlib.h>

int main()
{
	double x;
	printf("Enter a value for x: \n");
    scanf("%lf",&x);
	double c = x;
	double y = c;
	double y_old = 0.0;
	for (int k = 1; y != y_old; k++)
	{
		y_old = y;
		c = (-c) * x * x / (2 * k + 1)/(2 * k);
		y += c;
		printf("%f \n", y);

	}
	printf("sin(%f) = %+.6f", x,y);
	return 0;
}
