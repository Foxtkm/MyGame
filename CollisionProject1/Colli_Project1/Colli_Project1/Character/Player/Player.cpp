#include"Player.h"

Player::Player(IWorld & world, const Vector2 & position)
{
	world_ = &world;
	name_ = "Player";
	//Seg_body_ = BoundingSegment{ Vector2{-width / 2,0},Vector2{width / 2,0.0f} };
	Box_body_ = Box{ -250,-250,250,250 };
	//texture_[0]=LoadGraph("")
	position_ = position;
	Cr = GetColor(255, 255, 255);
}

Player::~Player()
{
}

void Player::update()
{
	Vector2 velocity = Vector2::Zero;

	if (CheckHitKey(KEY_INPUT_W))velocity.y -= 3;
	if (CheckHitKey(KEY_INPUT_S))velocity.y += 3;
	if (CheckHitKey(KEY_INPUT_A))velocity.x -= 3;
	if (CheckHitKey(KEY_INPUT_D))velocity.x += 3;

	position_ += velocity;

}

void Player::react(Actor & other)
{
}

void Player::draw() const
{
	DrawBox(position_.x - 250, position_.y - 250,
			position_.x + 250, position_.y + 250,
			Cr, FALSE);
	/*DrawLine(position_.x - width / 2, position_.y,
		position_.x + width / 2, position_.y,
		Cr);*/
}
