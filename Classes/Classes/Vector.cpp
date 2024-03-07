#include "Vector.h"
#include <cmath>
#include <iostream>

Vector::Vector()
{
	Set(0, 0, 0);
}

Vector::Vector(float x, float y, float z)
{
	Set(x, y, z);
}

Vector::Vector(const Vector& otherVector)
{
	Set(otherVector);
}

float Vector::GetX()
{
	return x;
}

float Vector::GetY()
{
	return y;
}

float Vector::GetZ()
{
	return z;
}

void Vector::SetX(float x)
{
	this->x = x;
}

void Vector::SetY(float y)
{
	this->y = y;
}

void Vector::SetZ(float z)
{
	this->z = z;
}

void Vector::Set(const Vector& otherVector)
{
	Set(otherVector.x, otherVector.y, otherVector.z);
}

void Vector::Set(float x, float y, float z)
{
	SetX(x);
	SetY(y);
	SetZ(z);
}

float Vector::GetModule()
{
	return sqrt(x * x + y * y + z * z);
}

void Vector::Print()
{
	std::cout << x << " " << y << " " << z << std::endl;
}
