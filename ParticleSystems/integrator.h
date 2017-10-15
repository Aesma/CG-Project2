#ifndef INTEGRATOR_H
#define INTEGRATOR_H

#include "forcefield.h"
#include "particle.h"
#include "vectors.h"

class Integrator
{
public:
	virtual void Update(Particle *p, ForceField *forcefield, float current_time, float dt) = 0;
	virtual Vec3f getColor();
protected:
	Vec3f color;
};

#endif