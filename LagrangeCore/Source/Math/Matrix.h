#pragma once

#include "Math/Vector.h"

// All matrix types are COLUMN MATRIX

template<int column_length, int row_length, typename T, typename std::enable_if_t<std::is_arithmetic_v<T>>>
struct Matrix;

template<typename T, typename std::enable_if_t<std::is_arithmetic_v<T>> a>
struct Matrix<2, 2, T, a> {

	union {
		struct {
			Vector2<T> a;
			Vector2<T> b;
		};
		struct {
			T m00;
			T m10;
			T m01;
			T m11;
		};
	};

};