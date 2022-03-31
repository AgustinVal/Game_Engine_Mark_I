#pragma once
#include <iostream>
#include "point.h"
#include "Vector3D.h"
#include "BoundingBox.h"

class Actor
{
private:
    Vector3D mPos, mVel;
    float mLength, mWeight, mHeight;  //x, y, z, por ahora lo modelare como un cubo
public:
    Actor(const Vector3D& pos, const Vector3D& vel, const float lenght, const float weight, const float height);
    const Vector3D& pos() const;
    const Vector3D& vel() const;
    const float lenght() const; 
    const float weight() const;
    const float height() const;
    void update(float delta_tiempo) const;
    BoundingBox boundingBox();
};