#pragma once
#include "AdstractScene.h"

//�V�[���}�l�[�W���[�N���X
//�e�V�[���̐؂�ւ����Ǘ�����
class SceneManager :public AbstractScene {
private:
	AbstractScene* mScene;//���݂̃V�[��
public:
	//�R���X�g���N�^
	SceneManager(AbstractScene* scene) :mScene(scene) {}

	//�f�X�g���N�^
	~SceneManager() {
		delete mScene;
	}


	//�`��ȊO�̍X�V����������
	AbstractScene* Update() override;

	//�`��Ɋւ��邱�Ƃ����s����
	void Draw() const override;
};
