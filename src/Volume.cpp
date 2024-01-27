#include <cmath>
#include "../include/Volume.h"

double CalculateSphereVolume(double radius)
{
    /*
        Calculate the volume of a sphere of a given radius and return the value
        formula -> 4/3 * pi * r^3
    */
    const int PI = 3.14;
    return 4.0 / 3.0 * PI * std::pow(radius, 3);
}

double CalculateCubeVolume(double length)
{
    /*
        Calculate the volume of a cube of given length
        formula -> l^3
    */
   return std::pow(length, 3);
}