#include <stdio.h>
#include "InputControl.h"
#include "GameMain.h"

GameMain::GameMain() {
	player = new Player();
}

GameMain::~GameMain() {

}

AbstractScene* GameMain::Update() {

	player->Update();

	// Ｚキーでメニュー選択
	if (InputControl::GetKey(PAD_INPUT_A)) {
		//return new GameMain();
	}

	return this;
}
void GameMain::Draw() const {
	SetFontSize(16);
	DrawFormatString(20, 50, 0xf00fff, "GameMain");

	player->Draw();
}