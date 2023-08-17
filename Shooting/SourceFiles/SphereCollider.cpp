#include <math.h>
#include "SphereCollider.h"

bool SphereCollider::CheckCollision(SphereCollider* bCollider)
{
	bool ret = false;	//�Ԃ�l

	//��r�ΏۂP�̓����蔻��͈̔�
	float sphere1_posX = location.x;
	float sphere1_posY = location.y;
	float sphere1_radius = radius;

	//��r�ΏۂQ�̓����蔻��͈̔�
	float sphere2_posX = bCollider->location.x;
	float sphere2_posY = bCollider->location.y;
	float sphere2_radius = bCollider->radius;

	//�O�����̒藝���g���đΏۓ��m�̒��S���W����̋������v��
	float a = sphere1_posX + sphere2_posX;
	float b = sphere1_posY + sphere2_posY;
	float c = sqrt(a * a + b * b);			//��r�ΏۂP�Ɣ�r�ΏۂQ�̒��S���W����̋���

	//��̉~�̔��a�̘a�Ɠ�̉~�̒��S���W����̋������r
	if (c <= sphere1_radius + sphere2_radius) {
		ret = true;
	}

	return ret;

}
