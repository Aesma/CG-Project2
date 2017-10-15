#ifndef RUNGEKUTTAINTEGRATOR_H
#define RUNGEKUTTAINTEGRATOR_H

#include "integrator.h"

class RungeKuttaIntegrator:public Integrator
{
public:
	void Update(Particle *p, ForceField *forcefield, float current_time, float dt);
};

#endif