#ifndef VECTOR2D_H_
#define VECTOR2D_H_

#include<iostream>

typedef unsigned Uint;

struct Vector2
{
	float x;
	float y;

	Vector2() = default;							//デフォルトコンストラクタ

	Vector2(float _x, float _y);					//コンストラクタ

	//ベクトルの長さを計算
	float Length()const;

	//内積計算
	static float Dot(const Vector2& vector1, const Vector2& vector2);

	//外積計算
	static float Cross(const Vector2& vector1, const Vector2& vector2);

	//もう一方のベクトルとの距離
	static float Distance(const Vector2& vector1, const Vector2& vector2);

	//正規化(長さを "1" にした)ベクトル
	Vector2 Normalize(const Vector2& value)const;

	// 定数
	static const Vector2 Up;			// Vector2( 0,  1)
	static const Vector2 Down;			// Vector2( 0, -1)
	static const Vector2 Left;			// Vector2(-1,  0)
	static const Vector2 Right;			// Vector2( 1,  0)
	static const Vector2 UnitX;			// Vector2( 1,  0)
	static const Vector2 UnitY;			// Vector2( 0,  1)
	static const Vector2 One;			// Vector2( 1,  1)
	static const Vector2 Zero;			// Vector2( 0,  0)

   //**単項演算子オーバーロード**//
	Vector2 operator +()const;
	Vector2 operator -()const;

	Vector2 operator +(const Vector2& other)const;	//2項 +
	Vector2 operator -(const Vector2& other)const;	//2項 -
	Vector2 operator *(float s)const;				//2項 *
	Vector2 operator /(float s)const;				//2項 /


   //**複合演算子オーバーロード**//

	Vector2& operator +=(const Vector2& other);		//複合代入演算子 +=
	Vector2& operator -=(const Vector2& other);		//複合代入演算子 -=
	Vector2& operator *=(float s);					//複合代入演算子 *=
	Vector2& operator /=(float s);					//複合代入演算子 /=

	//template <class Char> // 出力ストリーム
	//inline std::basic_ostream<Char>& operator <<(std::basic_ostream<Char>& os, const Vec2& v)
	//{
	//	return os << Char('(') << v.x << Char(',') << v.y << Char(')');
	//}

	//template <class Char> // 入力ストリーム
	//inline std::basic_istream<Char>& operator >>(std::basic_istream<Char>& is, Vec2& v)
	//{
	//	Char unused;
	//	return is >> unused >> v.x >> unused >> v.y >> unused;
	//}
};

#endif // !VECTOR2D_H_
