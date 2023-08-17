#pragma once
#include "DxLib.h"
#include "SphereCollider.h"

//#include "GameMain.h"

class CharaBase : public SphereCollider
{
protected:
	float speed;
	float image;
public:

	// �`��ȊO�̍X�V����������
	virtual void Update(int *gamemain) ;

	//�`��Ɋւ��邱�Ƃ���������
	virtual void Draw() const ;

	//�_���[�W���󂯂��Ƃ��̏���
	virtual void Hit(int damage);

};

