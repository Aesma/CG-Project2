#ifndef MIDPOINTINERGRATOR_H
#define MIDPOINTINTEGRATOR_H

#include "integrator.h"

class MidpointIntegrator :public Integrator
{
public:
	void Update(Particle *p, ForceField *forcefield, float current_time, float dt);
};

#endif