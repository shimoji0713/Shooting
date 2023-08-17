#pragma once
#include "CharaBase.h"
#include "BulletsSpawner.h"

class Player : public CharaBase
{
private:
	float score;
	BulletsSpawner* weapon;	//(BulletsSpawner�|�C���^�^)
public:
	//�R���X�g���N�^
	Player();

	//�f�X�g���N�^
	~Player();

	// �`��ȊO�̍X�V����������
	void Update(int *gamemain) override;

	//�`��Ɋւ��邱�Ƃ���������
	void Draw() const;

	//�_���[�W���󂯂��Ƃ��̏���
	void Hit();
};