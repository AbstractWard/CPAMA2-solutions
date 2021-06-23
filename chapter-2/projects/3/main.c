#include <stdio.h>

#define PI 3.1415f

int main(void)
{
    float r, volume;

    printf("Enter radius of sphere in meters: ");
    scanf("%f", &r);
    volume = (4.0f / 3.0f) * PI * r * r * r;

    printf("Volume of a sphere with a radius of %f meters: %fm³\n", r, volume);
    
    return 0;
}