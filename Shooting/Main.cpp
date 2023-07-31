#include "DxLib.h"
//#include "SceneManager.h"
//#include "Title.h"
//#include "InputControl.h"

int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_ LPSTR il, _In_ int ii)
{
	// ウィンドウモードで起動
	ChangeWindowMode(TRUE);

	// DXライブラリの初期化
	if (DxLib_Init() == -1) {
		return -1;
	}
	// タイトル シーンオブジェクト作成
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

	// DXライブラリの終了処理
	DxLib_End();

	return 0;
}