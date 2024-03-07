#pragma once

class Vector
{
private:
	float x;
	float y;
	float z;
public:
	Vector();
	Vector(float x, float y, float z);
	Vector(const Vector& otherVector);
	float GetX();
	float GetY();
	float GetZ();
	void SetX(float x);
	void SetY(float y);
	void SetZ(float z);
	void Set(const Vector& otherVector);
	void Set(float x, float y, float z);
	float GetModule();
	void Print();
};
