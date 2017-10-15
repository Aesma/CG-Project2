#ifndef VERTICALFORCEFIELD_H
#define VERTICALFORCEFIELD_H

#include "forcefield.h"

class VerticalForceField :public ForceField
{
public:
	VerticalForceField(float);
	Vec3f getAcceleration(const Vec3f &position, float mass, float t);
private:
	float magnitude;
};

#endif