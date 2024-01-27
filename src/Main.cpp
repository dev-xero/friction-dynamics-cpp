#include <iostream>
#include "../include/Log.h"
#include "../include/Volume.h"
#include "../include/FrictionDynamics.h"

void TestFrictionDynamicsProblems(double mu, double mass, double angle)
{
    /*
        * The frictional force experienced by a block of mass 3.0kg
        * on a horizontal surface

        *
     */
    const int gravity = 9.8;
    double normalReaction = mass * gravity;

    double frictionalForce = CalculateFrictionalForceOnHorizontal(mu, normalReaction);
    double inclinedFrictionalForce = CalculateFrictionalForceOnInclined(mu, normalReaction, angle);

    LogPrefixedDoubleValue("Frictional force on a horizontal surface:", frictionalForce);
    LogPrefixedDoubleValue("Frictional force on an inclined surface:", inclinedFrictionalForce);
}

void TestVolumeCalculationProblems()
{
    double sphereRadius = 3.9;
    double sphereVolume = CalculateSphereVolume(sphereRadius);

    double cubeLength = 4.1;
    double cubeVolume = CalculateCubeVolume(cubeLength);

    LogPrefixedDoubleValue("Approx. sphere volume (m^3):", sphereVolume);
    LogPrefixedDoubleValue("Approx. cube volume (m^3):", cubeVolume);
}

int main()
{
    double mu = 0.0278;
    double mass = 3.1;
    double angle = 60;

    TestFrictionDynamicsProblems(mu, mass, angle);
}