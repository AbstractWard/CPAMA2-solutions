#include <stdio.h>

int main(void)
{
    float x, polynomial;

    printf("Enter a value for x: ");
    scanf("%f", &x);
    polynomial = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("The value of the polynomial 3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6 when x = %f is: %f\n", x, polynomial); 

    return 0;
}