#pragma once

#include <memory>
#include "Geometry/ConvexMesh.h"
#include "Geometry/Mesh.h"

namespace cooking {

	std::shared_ptr<ConvexMesh> cook_convex_hull(const Mesh& mesh, int32_t max_verticies);

}