#include "DxLib.h"
#include "SceneManager.h"
#include "Title.h"
#include "InputControl.h"
#include "Fps.h"
#include "Define.h"


int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_ LPSTR il, _In_ int ii)
{
	// ウィンドウタイトルを設定
	SetMainWindowText("");        

	// ウィンドウモードで起動
	ChangeWindowMode(TRUE);

	// ウインドウのサイズ
	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32);

	// DXライブラリの初期化
	if (DxLib_Init() == -1){
		return -1;
	}

	// 描画先画面を裏にする（ダブルバッファリング）
	SetDrawScreen(DX_SCREEN_BACK);                 

	// タイトル シーンオブジェクト作成
	SceneManager* sceneMng = new SceneManager((AbstractScene*) new Title());

	Fps fps;

	while (ProcessMessage() != -1 && (sceneMng->Update() != nullptr))
	{
		ClearDrawScreen();

		InputControl::Update();

		sceneMng->Draw();

		fps.Update();	//更新
		fps.Draw();		//描画

		ScreenFlip();

		fps.Wait();//待機
	}

	delete sceneMng;

	// DXライブラリの終了処理
	DxLib_End();

	return 0;
}