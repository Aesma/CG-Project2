#ifndef RADIAFORCEFIELD_H
#define RADIAFORCEFIELD_H

#include "forcefield.h"
#include <cmath>

class RadialForceField :public ForceField
{
public:
	RadialForceField(float);
	Vec3f getAcceleration(const Vec3f &position, float mass, float t);
private:
	float magnitude;
};

#endif