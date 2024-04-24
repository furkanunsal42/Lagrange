
#include <iostream>
#include "Math/Vector.h"
#include "glm/vec2.hpp"

int main() {

	glm::vec2 a(1, 1);
	glm::vec2 b(2, 2);

	glm::vec2 c = a + b;

	std::cout << c.x << ", " << c.y << std::endl;

	std::cin.get();
}