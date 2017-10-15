#ifndef GRAVITYFORCEFIELD_H
#define GRAVITYFORCEFIELD_H

#include "forcefield.h"

class GravityForceField :public ForceField
{
public:
	GravityForceField(Vec3f);
	Vec3f getAcceleration(const Vec3f &position, float mass, float t);
private:
	Vec3f gravity;
};

#endif