#pragma once
#include "AdstractScene.h"

class Title :public AbstractScene {
private:

public:
	//�R���X�g���N�^
	Title();

	//�f�X�g���N�^
	virtual ~Title();

	//�`��ȊO�̍X�V����������
	virtual AbstractScene* Update() override;

	//�`��Ɋւ��邱�Ƃ���������
	virtual void Draw() const override;
};