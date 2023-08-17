#pragma once
#include "BulletsSpawner.h"
class NwaySpawner : public BulletsSpawner
{
private:
	float numBullets;		//(”­Ë‚·‚é’e‚Ì”)
	float baseAngle;		//(”­Ë‚·‚éÅ‰‚Ì’e‚ÌŒü‚«)
	float angleDiff;		//(’e“¯m‚ÌŠp“x·)

public:
	void Shoot(int *gamemain) override;
};

