#include "models.h"
#include <iostream>

double RIM() {
    // variables
    double assets, liab, shares, riskFreeRate, beta, ERP, EPS, divPayoutRatio;
    double re = riskFreeRate + (beta * ERP);
    double RI_t = EPS_t - (re * BV_(t-1));
}
