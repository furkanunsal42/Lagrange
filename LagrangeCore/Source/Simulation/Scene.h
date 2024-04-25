#pragma once

#include <Simulation/RigidActor.h>
#include <vector>
#include <unordered_set>

class Simulation;

class Scene {
public:

	void add_actor(std::shared_ptr<RigidActor> actor);
	void remove_actor(std::shared_ptr<RigidActor> actor);

private:
	friend Simulation;

	std::unordered_set<std::shared_ptr<RigidActor>> actors;
	real simulated_time_in_seconds = 0;
};