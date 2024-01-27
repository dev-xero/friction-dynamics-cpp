#include <iostream>

void LogDoubleValue(double value)
{
    // Logs the value of a double
    std::cout << value << std::endl;
}

void LogPrefixedDoubleValue(const char* prefix, double value)
{
    // Logs the value of a double after a prefix
    std::cout << prefix << " " << value << std::endl;
}