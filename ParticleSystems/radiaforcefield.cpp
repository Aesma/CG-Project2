#include "radiaforcefield.h"

RadialForceField::RadialForceField(float magnitude)
{
	this->magnitude = magnitude;
}

Vec3f RadialForceField::getAcceleration(const Vec3f &position, float mass, float t)
{
	Vec3f force = position*magnitude;
	force /= mass;
	Vec3f a = force * -1.0f;

	return a;
}