#pragma once

#include "SphereCollider.h"

class Bullet :public SphereCollider {
private:
	int damage;
	float speed;		//(���x)
	float angle;		// (�p�x)
	float acceleration;		//(���x�̕ω���)
	float angulVelocity;	//(�p�x�̕ω���)


public:
	// �`��ȊO�̍X�V����������
	void Update();

	//�`��Ɋւ��邱�Ƃ���������
	void Draw() const;

	//�_���[�W���󂯂��Ƃ��̏���
	void GetDamage(int damage);
};