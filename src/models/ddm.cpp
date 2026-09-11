#include "models.h"
#include <iostream>

double DDM(double dividend_0, double riskFreeRate, double equityRate, double beta, double payoutRatio, double ROE) {
    // variable construction
    double retentionRate = 1 - payoutRatio;
    double g = retentionRate * ROE;
    double D_1 = dividend_0 * (1 + g);
    double r = riskFreeRate + beta * (equityRate - riskFreeRate);


    return (D_1 / (r - g));
}
