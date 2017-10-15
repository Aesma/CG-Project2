#include "constantforcefield.h"

ConstantForceField::ConstantForceField(Vec3f force)
{
	this->force = force;
}

Vec3f ConstantForceField::getAcceleration(const Vec3f &position, float mass, float t)
{
	force = force * (1 / mass);
	return force;
}