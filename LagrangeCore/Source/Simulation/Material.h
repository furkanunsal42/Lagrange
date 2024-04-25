#pragma once

#include "Math/Types.h"

struct Material {
public:
	Material() {
		dynamic_friction = 0;
		static_friction = 0;
		resitution = 0;
	}

	Material(real dynamic_friction, real static_friction, real resitution) {
		this->dynamic_friction = dynamic_friction;
		this->static_friction = static_friction;
		this->resitution = resitution;
	}

	real dynamic_friction;
	real static_friction;
	real resitution;
};
