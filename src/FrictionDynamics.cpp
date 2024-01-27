#include <cmath>
#include "../include/Angles.h"
#include "../include/FrictionDynamics.h"

double CalculateFrictionalForceOnHorizontal(double mu, double normalReaction)
{
    /*
        * Calculate the frictional force experienced by an object on a horizontal surface

        * formula -> mu (coeff. of friction) x normal reaction
     */
    double frictionalForce = mu * normalReaction;
    return frictionalForce;
}

double CalculateFrictionalForceOnInclined(double mu, double normalReaction, double angle)
{
    /*
        * Calculate the frictional force experienced by an object on a surface inclined
        * at an angle from the horizontal surface

        * formula -> mu (coeff. of friction) * normal reaction * cos(theta)
    */
    int angleInRadians = ConvertDegreesToRadians(angle);
    double frictionalForce = mu * normalReaction * cos(angleInRadians);

    return frictionalForce;
}