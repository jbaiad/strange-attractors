#pragma once


class AbstractAttractor {
public:
    double x{0.1};
    double y{0.0};
    double z{0.0};
    double step_size{0.02};
    
    virtual double dx() {};
    virtual double dy() {};
    virtual double dz() {};
    void step();
};


class LorenzAttractor : public AbstractAttractor {
private:
    double sigma{0.0};
    double rho{0.0};
    double beta{0.0};
    
public:
    LorenzAttractor(double sigma=0.0, double rho=0.0, double beta=0.0): sigma(sigma), rho(rho), beta(beta) {};
    virtual double dx();
    virtual double dy();
    virtual double dz();
};

