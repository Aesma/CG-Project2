#include "HoseGenerator.h"

HoseGenerator::HoseGenerator(Vec3f position, float position_randomness, Vec3f velocity, float velocity_randomness)
{
	this->position = position;
	this->position_randomness = position_randomness;
	this->velocity = velocity;
	this->velocity_randomness = velocity_randomness;
}

Particle* HoseGenerator::Generate(float current_time, int i)
{
	Vec3f position_random = position + Vec3f(0.707f * (2 * random->next() - 1.0f) *  position_randomness, 0.707f * (2 * random->next() - 1.0f) *  position_randomness, 0.707f * (2 * random->next() - 1.0f) *  position_randomness);
	Vec3f velocity_random = velocity + Vec3f(0.707f * (2 * random->next() - 1.0f) *  velocity_randomness, 0.707f * (2 * random->next() - 1.0f) *  velocity_randomness, 0.707f * (2 * random->next() - 1.0f) *  velocity_randomness);
	float mass_random = mass + (2 * random->next() - 1.0f) * mass_randomness;
	float lifespan_random = lifespan + (2 * random->next() - 1.0f) * lifespan_randomness;
	Particle* particles = new Particle(position_random, velocity_random, color, dead_color, mass_random, lifespan_random);
	return particles;
}

int HoseGenerator::numNewParticles(float current_time, float dt)const
{
	int num = dt*desired_num_particles / lifespan;
	return num;
}

void HoseGenerator::Paint()const
{

}