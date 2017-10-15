#ifndef WINDFORCEFIELD_H
#define WINDFORCEFIELD_H

#include "forcefield.h"

class WindForceField :public ForceField
{
public:
	WindForceField(float);
	Vec3f getAcceleration(const Vec3f &position, float mass, float t);
private:
	float magnitude;
	float Noise1(int x, int y) const;
	float SmoothNoise_1(int x, int y) const;
	float Cosine_Interpolate(float a, float b, float x) const;
	float InterpolatedNoise_1(float x, float y) const;
	float PerlinNoise_2D(float x, float y) const;
};

#endif