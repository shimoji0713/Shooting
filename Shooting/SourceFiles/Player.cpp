#include "Player.h"
#include "InputControl.h"

Player::Player()
{
	location.x = 300;
	location.y = 333;
	radius = 30;
}

Player::~Player()
{
}

void Player::Update(int* gamemain)
{
	if (InputControl::GetKey(PAD_INPUT_RIGHT)) {
		location.x += 1;
	}
	if (InputControl::GetKey(PAD_INPUT_LEFT)) {
		location.x -= 1;
	}
}

void Player::Draw() const
{
	DrawCircle(location.x,location.y,radius,0xffffff,true);
}

void Player::Hit()
{
}
