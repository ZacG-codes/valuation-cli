#include "models.h"
#include <iostream>

double NAV(double assets, double liab, double shares) {
    // computation
    return (assets - liab) / shares;
}
