#include <math.h>
#include "SphereCollider.h"

bool SphereCollider::CheckCollision(SphereCollider* bCollider)
{
	bool ret = false;	//•Ô‚è’l

	//”äŠr‘ÎÛ‚P‚Ì“–‚½‚è”»’è‚Ì”ÍˆÍ
	float sphere1_posX = location.x;
	float sphere1_posY = location.y;
	float sphere1_radius = radius;

	//”äŠr‘ÎÛ‚Q‚Ì“–‚½‚è”»’è‚Ì”ÍˆÍ
	float sphere2_posX = bCollider->location.x;
	float sphere2_posY = bCollider->location.y;
	float sphere2_radius = bCollider->radius;

	//O•½•û‚Ì’è—‚ğg‚Á‚Ä‘ÎÛ“¯m‚Ì’†SÀ•W‚©‚ç‚Ì‹——£‚ğŒv‚é
	float a = sphere1_posX + sphere2_posX;
	float b = sphere1_posY + sphere2_posY;
	float c = sqrt(a * a + b * b);			//”äŠr‘ÎÛ‚P‚Æ”äŠr‘ÎÛ‚Q‚Ì’†SÀ•W‚©‚ç‚Ì‹——£

	//“ñ‚Â‚Ì‰~‚Ì”¼Œa‚Ì˜a‚Æ“ñ‚Â‚Ì‰~‚Ì’†SÀ•W‚©‚ç‚Ì‹——£‚ğ”äŠr
	if (c <= sphere1_radius + sphere2_radius) {
		ret = true;
	}

	return ret;

}
