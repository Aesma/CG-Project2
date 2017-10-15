#ifndef FORCEFIOLD_H
#define FORCEFIOLD_H

#include "vectors.h"

class ForceField
{
public:
	ForceField();
	ForceField(Vec3f);
	virtual Vec3f getAcceleration(const Vec3f &position, float mass, float t) = 0;
};

#endif