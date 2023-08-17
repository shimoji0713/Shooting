#include "DxLib.h"
#include "SceneManager.h"
#include "Title.h"
#include "InputControl.h"
#include "Fps.h"
#include "Define.h"


int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_ LPSTR il, _In_ int ii)
{
	// �E�B���h�E�^�C�g����ݒ�
	SetMainWindowText("");        

	// �E�B���h�E���[�h�ŋN��
	ChangeWindowMode(TRUE);

	// �E�C���h�E�̃T�C�Y
	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32);

	// DX���C�u�����̏�����
	if (DxLib_Init() == -1){
		return -1;
	}

	// �`����ʂ𗠂ɂ���i�_�u���o�b�t�@�����O�j
	SetDrawScreen(DX_SCREEN_BACK);                 

	// �^�C�g�� �V�[���I�u�W�F�N�g�쐬
	SceneManager* sceneMng = new SceneManager((AbstractScene*) new Title());

	Fps fps;

	while (ProcessMessage() != -1 && (sceneMng->Update() != nullptr))
	{
		ClearDrawScreen();

		InputControl::Update();

		sceneMng->Draw();

		fps.Update();	//�X�V
		fps.Draw();		//�`��

		ScreenFlip();

		fps.Wait();//�ҋ@
	}

	delete sceneMng;

	// DX���C�u�����̏I������
	DxLib_End();

	return 0;
}