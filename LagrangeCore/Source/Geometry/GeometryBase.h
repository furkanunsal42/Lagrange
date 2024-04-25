#pragma once

#include "glm/vec3.hpp"
#include <iterator>
#include <vector>

class implements_sdf {
public:
	virtual void compute_signed_distance(const glm::vec3 point, real& distance_out, glm::vec3& direction_out);
};

class consists_of_triangles {
public:

	virtual std::vector<glm::vec3>::iterator get_vertex_iterator();

};

class GeometryBase {

};