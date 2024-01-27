/*
    -> calculate frictional force (horizontal):
        Ff = coeff. of friction x normal reaction
    
    -> calculate frictional force (inclined):
        Ff = coeff. of friction x vertical component of normal reaction

    -> calculate force required to cause an acceleration (horizontal):
        Fp = ma + Ff

    -> calculate force required to cause an acceleration (inclined):
        Fp = ma + Ff + horizontal component of weight
*/
double CalculateFrictionalForceOnHorizontal(double mu, double normalReaction);
double CalculateFrictionalForceOnInclined(double mu, double normalReaction, double angle);