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

	float length()const;							//ベクトルの長さを計算するメンバ関数
	
	 float lengthSquare()const;						//ベクトルの長さの二乗

	 float dot(const Vector2& other)const;			//もう一方のベクトルとの内積

	float distanceFrom(const Vector2& other)const;	//もう一方のベクトルとの距離

	Vector2 normalize()const;						//正規化(長さを "1" にした)ベクトル


	 bool isZero()const;								//ゼロベクトルであるか

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
