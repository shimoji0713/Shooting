#pragma once

class BulletsSpawner 
{
protected:
	float speed;		// (���x)
	float angle;		// (�p�x)
	float acceleration;		//(���x�̕ω���)
	float angulVelocity;	// (�p�x�̕ω���)
	
public:
	virtual void Shoot(int *gamemain);		/*�����ɃQ�[�����C���V�[���̃|�C���^���󂯎��SpawnBullet�Œe�𐶐�����*/
};
