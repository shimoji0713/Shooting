#pragma once
#include "CharaBase.h"
#include "BulletsSpawner.h"

class Enemy : public CharaBase
{
private:
	int hp;
	int point;	// (�X�R�A�̉��Z��)
	BulletsSpawner* weapon;	//	(BulletsSpawner�̎q�N���X)
public:
	//�R���X�g���N�^
	Enemy();

	//�f�X�g���N�^
	~Enemy();

	// �`��ȊO�̍X�V����������
	void Update(int *gamemain) override;

	//�`��Ɋւ��邱�Ƃ���������
	void Draw() const;

	//�_���[�W���󂯂��Ƃ��̏���
	void Hit();
};