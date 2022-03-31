#pragma once
#include <iostream>
#include "Vector3D.h"


struct BoundingBox
{
    Vector3D position;
    float length, width, height; //x, y, z

    bool collision(const BoundingBox& box) const;

    void move(Vector3D vector3D);

};

std::ostream& operator<<(std::ostream& os, const BoundingBox& boundingBox);