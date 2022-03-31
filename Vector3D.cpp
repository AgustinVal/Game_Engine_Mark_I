#pragma once
#include <iostream>
#include "point.h"
#include "Vector3D.h"
struct Vector3D
{
    float x, y, z;
};
std::ostream& operator<<(std::ostream& os, const Vector3D& vector3D){
    return os << "( " << vector3D.x << ", " << vector3D.y << ", " << vector3D.z << ")";
}

Vector3D operator+(const Vector3D& lhs, const Vector3D rhs){
    return { lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z};
}

Vector3D operator-(const Vector3D& lhs, const Vector3D rhs){
    return { lhs.x - rhs.x, lhs.y - rhs.y, lhs.z - rhs.z};
}

Vector3D operator*=(const Vector3D& vec, const float scl){ //Multiplicar por escalar
    return { vec.x * scl, vec.y * scl, vec.z * scl};
}

float operator*(const Vector3D& lhs, const Vector3D rhs){ //Producto punto
    return { lhs.x * rhs.x + lhs.y * rhs.y + lhs.z * rhs.z};
}

Vector3D operator/(const Vector3D& u, const Vector3D v){ //Producto cruz
    return { u.y * v.z - u.z * v.y, u.z * v.x - u.x * v.z, u.x * v.y - u.y * v.x};
}