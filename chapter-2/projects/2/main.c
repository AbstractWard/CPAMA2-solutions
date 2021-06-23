#include <stdio.h>

#define PI 3.1415f
#define RADIUS 10.0f

int main(void)
{
    float volume = (4.0f / 3.0f) * PI * RADIUS * RADIUS * RADIUS;

    printf("Volume of a sphere with a radius of 10 meters: %fm³\n", volume);
    
    return 0;
}