#include "eulerintegrator.h"

void EulerIntegrator::Update(Particle *p, ForceField *forcefield, float current_time, float dt)
{
	float mass = p->getMass();
	color = p->getColor();
	Vec3f a = forcefield->getAcceleration(p->getPosition(), mass, current_time);
	Vec3f v = p->getVelocity();
	Vec3f position = p->getPosition() + v*dt;
	p->setPosition(position);
	Vec3f velocity = v + a*dt;
	p->setVelocity(velocity);
	p->increaseAge(dt);
}