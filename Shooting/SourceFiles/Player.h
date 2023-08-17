#pragma once
#include "CharaBase.h"
#include "BulletsSpawner.h"

class Player : public CharaBase
{
private:
	float score;
	BulletsSpawner* weapon;	//(BulletsSpawnerポインタ型)
public:
	//コンストラクタ
	Player();

	//デストラクタ
	~Player();

	// 描画以外の更新を実装する
	void Update(int *gamemain) override;

	//描画に関することを実装する
	void Draw() const;

	//ダメージを受けたときの処理
	void Hit();
};