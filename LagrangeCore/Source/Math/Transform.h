#pragma once

#include "glm/glm.hpp"
#include "glm/gtc/quaternion.hpp"

struct Transform {
	glm::vec3 position;
	glm::quat rotation;
	glm::vec3 scale;

	glm::vec3 transform_point(const glm::vec3& point);
	glm::vec3 transform_vector(const glm::vec3& point);
	Transform get_inverse();
};
