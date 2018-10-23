#include"Player.h"

Player::Player(IWorld & world, const Vector2 & position)
{
	world_ = &world;
	name_ = "Player";
	Circle_body_ = BoundingCircle{ Vector2{position_.x,position_.y},150 };

	position_ = position;

	//Seg_body_ = BoundingSegment{ Vector2{-width / 2,0},Vector2{width / 2,0.0f} };
	//Box_body_ = BoundingBox{ -width / 2,-height / 2,width / 2,height / 2 };
	//texture_[0]=LoadGraph("")
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
	/*DrawBox(position_.x - width, position_.y - height,
		position_.x + width, position_.y + height,
		Cr, FALSE);*/
	/*DrawLine(position_.x - width / 2, position_.y,
		position_.x + width / 2, position_.y,
		Cr);*/

	  DrawCircle(position_.x, position_.y, 150, Cr, FALSE);

}
