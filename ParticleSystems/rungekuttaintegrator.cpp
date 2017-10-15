#include "rungekuttalntegrator.h"

void RungeKuttaIntegrator::Update(Particle *p, ForceField *forcefield, float current_time, float dt)
{
	Vec3f position_current = p->getPosition();
	Vec3f velocity_current = p->getVelocity();
	Vec3f position_mid = position_current + velocity_current * (dt * 0.5f);
	Vec3f velocity_mid = velocity_current + forcefield->getAcceleration(position_current, p->getMass(), current_time) * (dt * 0.5f);
	Vec3f position_next = position_current + velocity_mid * dt;
	Vec3f velocity_next = velocity_current + forcefield->getAcceleration(position_mid, p->getMass(), current_time + 0.5f * dt) * dt;
	p->increaseAge(dt);
	p->setPosition(position_next);
	p->setVelocity(velocity_next);
}