#include <math.h>
#include "SphereCollider.h"

bool SphereCollider::CheckCollision(SphereCollider* bCollider)
{
	bool ret = false;	//返り値

	//比較対象１の当たり判定の範囲
	float sphere1_posX = location.x;
	float sphere1_posY = location.y;
	float sphere1_radius = radius;

	//比較対象２の当たり判定の範囲
	float sphere2_posX = bCollider->location.x;
	float sphere2_posY = bCollider->location.y;
	float sphere2_radius = bCollider->radius;

	//三平方の定理を使って対象同士の中心座標からの距離を計る
	float a = sphere1_posX + sphere2_posX;
	float b = sphere1_posY + sphere2_posY;
	float c = sqrt(a * a + b * b);			//比較対象１と比較対象２の中心座標からの距離

	//二つの円の半径の和と二つの円の中心座標からの距離を比較
	if (c <= sphere1_radius + sphere2_radius) {
		ret = true;
	}

	return ret;

}
