#pragma once

class BulletsSpawner 
{
protected:
	float speed;		// (速度)
	float angle;		// (角度)
	float acceleration;		//(速度の変化量)
	float angulVelocity;	// (角度の変化量)
	
public:
	virtual void Shoot(int *gamemain);		/*引数にゲームメインシーンのポインタを受け取るSpawnBulletで弾を生成する*/
};
