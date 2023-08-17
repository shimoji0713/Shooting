#pragma once
#include "AdstractScene.h"

#include "Player.h"

class GameMain :public AbstractScene{
private:
	Player* player;

public:
	//�R���X�g���N�^
	GameMain();

	//�f�X�g���N�^
	virtual ~GameMain();

	//�`��ȊO�̍X�V����������
	virtual AbstractScene* Update() override;

	//�`��Ɋւ��邱�Ƃ���������
	virtual void Draw() const override;
};
