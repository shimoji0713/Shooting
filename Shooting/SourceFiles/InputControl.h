#pragma once

#include "DxLib.h"
#include "GameMain.h"

class InputControl
{
private:
	static int key_flg;
	static int now_key;
	static int old_key;

	//マウス座標
	static int MouseX,MouseY;

public:
	InputControl()
	{
		key_flg = 0;
		now_key = 0;
		old_key = 0;

		MouseX = 0;
		MouseY = 0;
	}

	static void Update();
	static int GetKey(int key);
	static int GetKeyDown(int key);

	static int GetMauseXPoint();
};

