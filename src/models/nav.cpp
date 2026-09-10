#include "models.h"
#include <iostream>

double BVPS(double assets, double liab, double shares) {
    // computation
    return (assets - liab) / shares;
}
