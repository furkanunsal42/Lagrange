
#include <iostream>
#include "Math/Vector.h"
#include "glm/vec2.hpp"

#include "Simulation/Debug.h"


int main() {

	ASSERT(false, "ppk_assert_works %f", 1.0f);

	glm::vec2 a(1, 1);
	glm::vec2 b(2, 2);

	glm::vec2 c = a + b;

	std::cout << c.x << ", " << c.y << std::endl;

	std::cin.get();
}