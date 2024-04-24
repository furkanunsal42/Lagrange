#pragma once

#include <type_traits>
#include <iostream>

template <int length, typename T> 
struct Vector;

template<typename T>
struct Vector<1, T> {
	T x;

	static int size() { return 1 };

	Vector(T x = (T)0);

	Vector<1, T> operator+(const Vector<1, T>& other) const;
	Vector<1, T> operator-(const Vector<1, T>& other) const;
	Vector<1, T> operator*(const Vector<1, T>& other) const;
	Vector<1, T> operator/(const Vector<1, T>& other) const;

	Vector<1, T> operator+(const T& scaler) const;
	Vector<1, T> operator-(const T& scaler) const;
	Vector<1, T> operator*(const T& scaler) const;
	Vector<1, T> operator/(const T& scaler) const;

	Vector<1, T> operator+=(const Vector<1, T>& other) const;
	Vector<1, T> operator-=(const Vector<1, T>& other) const;
	Vector<1, T> operator*=(const Vector<1, T>& other) const;
	Vector<1, T> operator/=(const Vector<1, T>& other) const;

	Vector<1, T> operator+=(const T& scaler) const;
	Vector<1, T> operator-=(const T& scaler) const;
	Vector<1, T> operator*=(const T& scaler) const;
	Vector<1, T> operator/=(const T& scaler) const;

	Vector<1, bool> operator!=(const Vector<1, T>& other) const;
	Vector<1, bool> operator==(const Vector<1, T>& other) const;
	Vector<1, bool> operator>(const Vector<1, T>& other) const;
	Vector<1, bool> operator>=(const Vector<1, T>& other) const;
	Vector<1, bool> operator<(const Vector<1, T>& other) const;
	Vector<1, bool> operator<=(const Vector<1, T>& other) const;

	T magnitude() const;
};

template<typename T>
T dot(const Vector<1, T>& a, const Vector<1, T>& b);

template<typename T>
Vector<1, T> cross(const Vector<1, T>& a, const Vector<1, T>& b);

bool any(const Vector<1, bool>& vector);

template<typename T>
std::ostream& operator<<(std::ostream& stream, const Vector<1, T>&v) {
	return stream << "(" << v.x << ")";
}

template<typename T>
struct Vector<2, T>{
	T x;
	T y;
};

template<typename T>
struct Vector<3, T> {
	T x;
	T y;
	T z;
};

template<typename T>
struct Vector<4, T> {
	T x;
	T y;
	T z;
	T w;
};

typedef Vector<1, double>	vec1;
typedef Vector<1, double>	f64vec1;
typedef Vector<1, float>	f32vec1;
typedef Vector<1, int64_t>	i64vec1;
typedef Vector<1, int32_t>	i32vec1;
typedef Vector<1, int16_t>	i16vec1;
typedef Vector<1, int8_t>	i8vec1;
typedef Vector<1, uint64_t>	ui64vec1;
typedef Vector<1, uint32_t>	ui32vec1;
typedef Vector<1, uint16_t>	ui16vec1;
typedef Vector<1, uint8_t>	ui8vec1;
typedef Vector<1, bool>		bvec1;

typedef Vector<1, double>	double1;
typedef Vector<1, float>	float1;
typedef Vector<1, int64_t>	long1;
typedef Vector<1, int32_t>	int1;
typedef Vector<1, int16_t>	short1;
typedef Vector<1, int8_t>	byte1;
typedef Vector<1, uint64_t>	ulong1;
typedef Vector<1, uint32_t>	uint1;
typedef Vector<1, uint16_t>	ushort1;
typedef Vector<1, uint8_t>	ubyte1;
typedef Vector<1, bool>		bool1;

typedef Vector<2, double>	vec2;
typedef Vector<2, double>	f64vec2;
typedef Vector<2, float>	f32vec2;
typedef Vector<2, int64_t>	i64vec2;
typedef Vector<2, int32_t>	i32vec2;
typedef Vector<2, int16_t>	i16vec2;
typedef Vector<2, int8_t>	i8vec2;
typedef Vector<2, uint64_t>	ui64vec2;
typedef Vector<2, uint32_t>	ui32vec2;
typedef Vector<2, uint16_t>	ui16vec2;
typedef Vector<2, uint8_t>	ui8vec2;
typedef Vector<2, bool>		bvec2;

typedef Vector<2, double>	double2;
typedef Vector<2, float>	float2;
typedef Vector<2, int64_t>	long2;
typedef Vector<2, int32_t>	int2;
typedef Vector<2, int16_t>	short2;
typedef Vector<2, int8_t>	byte2;
typedef Vector<2, uint64_t>	ulong2;
typedef Vector<2, uint32_t>	uint2;
typedef Vector<2, uint16_t>	ushort2;
typedef Vector<2, uint8_t>	ubyte2;
typedef Vector<2, bool>		bool2;

typedef Vector<3, double>	vec3;
typedef Vector<3, double>	f64vec3;
typedef Vector<3, float>	f32vec3;
typedef Vector<3, int64_t>	i64vec3;
typedef Vector<3, int32_t>	i32vec3;
typedef Vector<3, int16_t>	i16vec3;
typedef Vector<3, int8_t>	i8vec3;
typedef Vector<3, uint64_t>	ui64vec3;
typedef Vector<3, uint32_t>	ui32vec3;
typedef Vector<3, uint16_t>	ui16vec3;
typedef Vector<3, uint8_t>	ui8vec3;
typedef Vector<3, bool>		bvec3;

typedef Vector<3, double>	double3;
typedef Vector<3, float>	float3;
typedef Vector<3, int64_t>	long3;
typedef Vector<3, int32_t>	int3;
typedef Vector<3, int16_t>	short3;
typedef Vector<3, int8_t>	byte3;
typedef Vector<3, uint64_t>	ulong3;
typedef Vector<3, uint32_t>	uint3;
typedef Vector<3, uint16_t>	ushort3;
typedef Vector<3, uint8_t>	ubyte3;
typedef Vector<3, bool>		bool3;

typedef Vector<4, double>	vec4;
typedef Vector<4, double>	f64vec4;
typedef Vector<4, float>	f32vec4;
typedef Vector<4, int64_t>	i64vec4;
typedef Vector<4, int32_t>	i32vec4;
typedef Vector<4, int16_t>	i16vec4;
typedef Vector<4, int8_t>	i8vec4;
typedef Vector<4, uint64_t>	ui64vec4;
typedef Vector<4, uint32_t>	ui32vec4;
typedef Vector<4, uint16_t>	ui16vec4;
typedef Vector<4, uint8_t>	ui8vec4;
typedef Vector<4, bool>		bvec4;

typedef Vector<4, double>	double4;
typedef Vector<4, float>	float4;
typedef Vector<4, int64_t>	long4;
typedef Vector<4, int32_t>	int4;
typedef Vector<4, int16_t>	short4;
typedef Vector<4, int8_t>	byte4;
typedef Vector<4, uint64_t>	ulong4;
typedef Vector<4, uint32_t>	uint4;
typedef Vector<4, uint16_t>	ushort4;
typedef Vector<4, uint8_t>	ubyte4;
typedef Vector<4, bool>		bool4;




