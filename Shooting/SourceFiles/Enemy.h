#pragma once
#include "CharaBase.h"
#include "BulletsSpawner.h"

class Enemy : public CharaBase
{
private:
	int hp;
	int point;	// (スコアの加算量)
	BulletsSpawner* weapon;	//	(BulletsSpawnerの子クラス)
public:
	//コンストラクタ
	Enemy();

	//デストラクタ
	~Enemy();

	// 描画以外の更新を実装する
	void Update(int *gamemain) override;

	//描画に関することを実装する
	void Draw() const;

	//ダメージを受けたときの処理
	void Hit();
};