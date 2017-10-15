#ifndef EULERINTEGRATOR_H
#define EULERINTEGRATOR_H

#include "integrator.h"

class EulerIntegrator :public Integrator
{
public:
	void Update(Particle *p, ForceField *forcefield, float current_time, float dt);
};

#endif