#pragma once
#include <iostream>
#include "Vector3D.h"
#include "BoundingBox.h"


struct BoundingBox
{
    Vector3D position;
    float length, width, height; //x, y, z

    bool collision(const BoundingBox& box) const
    {
        if(position.x < box.position.x + box.length && position.x + length > box.position.x &&
        position.y < box.position.y + box.width && position.y + width > box.position.y &&
        position.z < box.position.z + box.height && position.z + height > box.position.z && 
        length != 0 && width != 0 && height != 0)
            return true;
        return false;
    }

    void move(Vector3D vector3D)
    {
        position += vector3D;
    }

};

std::ostream& operator<<(std::ostream& os, const BoundingBox& boundingBox)
{
    return os << "( " << boundingBox.position.x << ", " << boundingBox.position.y << ", " << boundingBox.position.z
    << ", " << boundingBox.length << ", " << boundingBox.width << ", " << boundingBox. height << ")" ;
}
