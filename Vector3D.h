#pragma once
#include <iostream>
#include "point.h"

struct Vector3D
{
    float x, y, z;
};
std::ostream& operator<<(std::ostream& os, const Vector3D& vector3D);

Vector3D operator+(const Vector3D& lhs, const Vector3D rhs);

Vector3D operator-(const Vector3D& lhs, const Vector3D rhs);

Vector3D operator*=(const Vector3D& vec, const float scl); //Multiplicar por escalar

float operator*(const Vector3D& lhs, const Vector3D rhs); //Producto punto

Vector3D operator^(const Vector3D& u, const Vector3D v); //Producto cruz












