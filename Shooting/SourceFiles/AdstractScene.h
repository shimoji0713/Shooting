#pragma once

//�f�t�H���g�̒��ۃV�[���N���X
class AbstractScene {
private:
	int num = 0;
	void a() {
		num = 0;
	}
public:
	//�f�X�g���N�^
	virtual ~AbstractScene() {};

	//�`��ȊO�̍X�V����������
	virtual AbstractScene* Update() = 0;

	//�`��Ɋւ��邱�Ƃ����s����
	virtual void Draw() const = 0;
};
