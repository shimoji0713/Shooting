#pragma once
#include "DxLib.h"
#include "SphereCollider.h"

//#include "GameMain.h"

class CharaBase : public SphereCollider
{
protected:
	float speed;
	float image;
public:

	// 描画以外の更新を実装する
	virtual void Update(int *gamemain) ;

	//描画に関することを実装する
	virtual void Draw() const ;

	//ダメージを受けたときの処理
	virtual void Hit(int damage);

};

