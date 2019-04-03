#include "attractors.h"


void AbstractAttractor::step() {
    x += step_size * dx();
    y += step_size * dy();
    z += step_size * dz();
}

double LorenzAttractor::dx() {
    return sigma * (y - x);
}

double LorenzAttractor::dy() {
    return x * (rho - z) - y;
}

double LorenzAttractor::dz() {
    return x*y - beta*z;
}
