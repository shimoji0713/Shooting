#pragma once
#include "BulletsSpawner.h"
class NwaySpawner : public BulletsSpawner
{
private:
	float numBullets;		//(���˂���e�̐�)
	float baseAngle;		//(���˂���ŏ��̒e�̌���)
	float angleDiff;		//(�e���m�̊p�x��)

public:
	void Shoot(int *gamemain) override;
};

