#include "midpointintegrator.h"

void MidpointIntegrator::Update(Particle *p, ForceField *forcefield, float current_time, float dt)
{
	float mass = p->getMass();
	color = p->getColor();
	Vec3f a = forcefield->getAcceleration(p->getPosition(), mass, current_time);
	Vec3f v = p->getVelocity();
	Vec3f pm = p->getPosition() + v*(dt / 2);
	Vec3f vm = v + a*(dt / 2);
	Vec3f position = p->getPosition() + vm*dt;
	Vec3f velocity = v + forcefield->getAcceleration(pm, mass, current_time + dt / 2)*dt;
	p->setPosition(position);
	p->setVelocity(velocity);
	p->increaseAge(dt);
}