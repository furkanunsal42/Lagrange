#pragma once

#include "Simulation/Material.h"
#include "Math/Transform.h"
#include "Geometry/GeometryBase.h"
#include <memory>

class RigidActor {
public:

	RigidActor() = delete;
	RigidActor(const RigidActor& other) = delete;
	
	RigidActor(std::shared_ptr<Geometry> geometry, Transform transform, Material material);

	std::shared_ptr<Geometry> geometry;
	Transform transform;
	Material material;

};