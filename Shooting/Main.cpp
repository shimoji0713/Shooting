#include "DxLib.h"
//#include "SceneManager.h"
//#include "Title.h"
//#include "InputControl.h"

int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_ LPSTR il, _In_ int ii)
{
	// �E�B���h�E���[�h�ŋN��
	ChangeWindowMode(TRUE);

	// DX���C�u�����̏�����
	if (DxLib_Init() == -1) {
		return -1;
	}
	// �^�C�g�� �V�[���I�u�W�F�N�g�쐬
	/*SceneManager* sceneMng = new SceneManager((AbstractScene*) new Title());*/

	/*while (ProcessMessage() != -1 && (sceneMng->Update() != nullptr))*/
	while (ProcessMessage() == 0 /*&& g_GameState != 99*/)
	{
		ClearDrawScreen();

		/*InputControl::Update();*/

		/*sceneMng->Draw();*/

		ScreenFlip();
	}

	/*delete sceneMng;*/

	// DX���C�u�����̏I������
	DxLib_End();

	return 0;
}