#pragma once
#include <iostream>
#include "point.h"
#include "Vector3D.h"
#include "BoundingBox.h"
#include "Actor.h"

Actor::Actor(const Vector3D& pos, const Vector3D& vel, const float lenght, const float weight, const float height):
    position(pos), velocity(vel), lenght(lenght), weight(weight), height(height)
{
}

Vector3D Actor::position(){
    return 
}

BoundingBox Actor::boundingBox(){
    BoundingBox b1{mPos.x, mPos.y, mPos.z, mLength * 2, mWeight * 2, mHeight * 2 };
}

void Actor::update(float delta_tiempo){
    mPos += (mVel*=delta_tiempo);
}



