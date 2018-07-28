#pragma once









struct Vector3
{
	float x;
	float y;
	float z;

	Vector3() {}

	Vector3(float _x, float _y, float _z) : 
		x(_x), y(_y), z(_z) {}

	Vector3 operator+ (const Vector3& other)
	{
		Vector3 result;
		result.x = this->x + other.x;
		result.y = this->y + other.y;
		result.z = this->z + other.z;
		return result;
	}

	Vector3 operator- (const Vector3& other)
	{
		Vector3 result;
		result.x = this->x - other.x;
		result.y = this->y - other.y;
		result.z = this->z - other.z;
		return result;
	}

	Vector3 operator* (const Vector3& other)
	{
		Vector3 result;
		result.x = this->x * other.x;
		result.y = this->y * other.y;
		result.z = this->z * other.z;
		return result;
	}
};

class CMathV
{
public:
	CMathV();
	~CMathV();
};

