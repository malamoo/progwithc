/* Reads in the radius of a sphere, in meters, and calculates and outputs the 
   volume of that sphere in cubic meters.
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    double r, volume;

    printf("Enter radius of sphere in meters: ");

    scanf("%lf", &r);

    printf("Sphere radius, r = %.3f m\n", r);

    volume = 4.0 / 3.0 * M_PI * r * r * r;

    printf("Sphere volume, V = %.3f m^3\n", volume);

    return 0;
}