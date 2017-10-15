#ifndef CONSTANTFORCEFIELD_H
#define CONSTANTFORCEFIELD_H

#include "forcefield.h"

class ConstantForceField :public ForceField
{
public:
	ConstantForceField(Vec3f);
	Vec3f getAcceleration(const Vec3f &position, float mass, float t);
private:
	Vec3f force;
};

#endif