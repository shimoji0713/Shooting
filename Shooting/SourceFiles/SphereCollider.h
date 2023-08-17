#pragma once
struct Location		//’†SÀ•W
{
	float x;
	float y;
};

class SphereCollider
{
protected:
	Location location;
	float radius;		//”¼Œa
public:
	bool CheckCollision(SphereCollider* bCollider);
};

