#pragma once
struct Location		//���S���W
{
	float x;
	float y;
};

class SphereCollider
{
protected:
	Location location;
	float radius;		//���a
public:
	bool CheckCollision(SphereCollider* bCollider);
};

