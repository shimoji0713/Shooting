#pragma once
#include "AdstractScene.h"

class Title :public AbstractScene {
private:

public:
	//コンストラクタ
	Title();

	//デストラクタ
	virtual ~Title();

	//描画以外の更新を実装する
	virtual AbstractScene* Update() override;

	//描画に関することを実装する
	virtual void Draw() const override;
};