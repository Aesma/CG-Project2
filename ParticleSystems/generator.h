#ifndef GENERATOR_H
#define GENERATOR_H

#include "particle.h"
#include "forcefield.h"
#include "vectors.h"
#include "random.h"
#include <windows.h>
#include <GL/GL.h>
#include <GL/glut.h>

class Generator
{
public:
	Generator();
	virtual void Restart();
	virtual int numNewParticles(float time, float dt)const = 0;
	virtual Particle* Generate(float current_time, int i) = 0;
	virtual void Paint()const = 0;
	virtual void SetColors(Vec3f color, Vec3f dead_color, float color_randomness);
	virtual void SetMass(float mass, float mass_randomness);
	virtual void SetLifespan(float lifespan, float lifespan_randomness, int desired_num_particles);
protected:
	Random *random;
	Vec3f color;
	Vec3f dead_color; 
	float color_randomness;
	float mass;
	float mass_randomness;
	float lifespan;
	float lifespan_randomness;
	int desired_num_particles;
};

#endif