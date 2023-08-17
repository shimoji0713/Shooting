#include <stdio.h>
#include "InputControl.h"
#include "Title.h"
#include "GameMain.h"

Title::Title() {

}

Title::~Title() {

}

AbstractScene* Title::Update() {

	// �y�L�[�Ń��j���[�I��
	if (InputControl::GetKey(PAD_INPUT_A)) {
		return new GameMain();
	}

	return this;
}
void Title::Draw() const {
	SetFontSize(16);
	DrawFormatString(20, 50, 0xf00fff, "Title");
}