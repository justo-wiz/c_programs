#include <stdio.h>
#define PI 3.142
/**
 * @lf used for double datatype
 * PI is defined using macro
 *
 * Return 0 always.
 */

int main()
{
	double areaofcircle = PI * 10 * 10;

	printf("Area = %lf", areaofcircle);
	return (0);
}
