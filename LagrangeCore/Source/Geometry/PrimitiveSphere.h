#pragma once

#include "Math/Types.h"
#include "Geometry/GeometryBase.h"

class Sphere : public GeometryBase {
public:

	real radius;
	
	Sphere(real radius);

};