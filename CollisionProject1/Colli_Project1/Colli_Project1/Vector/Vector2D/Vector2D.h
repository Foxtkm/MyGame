#ifndef VECTOR2D_H_
#define VECTOR2D_H_

#include<iostream>

typedef unsigned Uint;

struct Vector2
{
	float x;
	float y;

	Vector2() = default;							//�f�t�H���g�R���X�g���N�^

	Vector2(float _x, float _y);					//�R���X�g���N�^

	//�x�N�g���̒������v�Z
	float Length()const;

	//���όv�Z
	static float Dot(const Vector2& vector1, const Vector2& vector2);

	//�O�όv�Z
	static float Cross(const Vector2& vector1, const Vector2& vector2);

	//��������̃x�N�g���Ƃ̋���
	static float Distance(const Vector2& vector1, const Vector2& vector2);

	//���K��(������ "1" �ɂ���)�x�N�g��
	Vector2 Normalize(const Vector2& value)const;

	// �萔
	static const Vector2 Up;			// Vector2( 0,  1)
	static const Vector2 Down;			// Vector2( 0, -1)
	static const Vector2 Left;			// Vector2(-1,  0)
	static const Vector2 Right;			// Vector2( 1,  0)
	static const Vector2 UnitX;			// Vector2( 1,  0)
	static const Vector2 UnitY;			// Vector2( 0,  1)
	static const Vector2 One;			// Vector2( 1,  1)
	static const Vector2 Zero;			// Vector2( 0,  0)

   //**�P�����Z�q�I�[�o�[���[�h**//
	Vector2 operator +()const;
	Vector2 operator -()const;

	Vector2 operator +(const Vector2& other)const;	//2�� +
	Vector2 operator -(const Vector2& other)const;	//2�� -
	Vector2 operator *(float s)const;				//2�� *
	Vector2 operator /(float s)const;				//2�� /


   //**�������Z�q�I�[�o�[���[�h**//

	Vector2& operator +=(const Vector2& other);		//����������Z�q +=
	Vector2& operator -=(const Vector2& other);		//����������Z�q -=
	Vector2& operator *=(float s);					//����������Z�q *=
	Vector2& operator /=(float s);					//����������Z�q /=

	//template <class Char> // �o�̓X�g���[��
	//inline std::basic_ostream<Char>& operator <<(std::basic_ostream<Char>& os, const Vec2& v)
	//{
	//	return os << Char('(') << v.x << Char(',') << v.y << Char(')');
	//}

	//template <class Char> // ���̓X�g���[��
	//inline std::basic_istream<Char>& operator >>(std::basic_istream<Char>& is, Vec2& v)
	//{
	//	Char unused;
	//	return is >> unused >> v.x >> unused >> v.y >> unused;
	//}
};

#endif // !VECTOR2D_H_
