#pragma once

#include "Simulation/Scene.h"

class Simulation {
public:
	
	void step(real deltatime);
	void async_step_begin(real deltatime);
	void async_step_end();

	void set_scene(std::shared_ptr<Scene> scene);

private:
	std::shared_ptr<Scene> current_scene;
};