#include <iostream>

struct Point
{
    float x, y, z;
};

std::ostream &operator<<(std::ostream &os, const Point &point);

Point operator+(const Point &lhs, const Point &rhs);

Point operator-(const Point &lhs, const Point &rhs);

Point operator*(const Point &lhs, float rhs);

Point operator*(float lhs, const Point &rhs);
