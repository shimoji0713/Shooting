#pragma once

#include "SphereCollider.h"

class Bullet :public SphereCollider {
private:
	int damage;
	float speed;		//(速度)
	float angle;		// (角度)
	float acceleration;		//(速度の変化量)
	float angulVelocity;	//(角度の変化量)


public:
	// 描画以外の更新を実装する
	void Update();

	//描画に関することを実装する
	void Draw() const;

	//ダメージを受けたときの処理
	void GetDamage(int damage);
};