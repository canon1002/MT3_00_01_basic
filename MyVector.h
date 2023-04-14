#pragma once
#include"Vector2.h"
#include"Vector3.h"
#include"Vector4.h"



class MyVector
{

public:

	// 加算
	static Vector3 Add(const Vector3& v1, const Vector3& v2);

	// 加算
	static Vector3 Subtract(const Vector3& v1, const Vector3& v2);

	// スカラー倍
	static Vector3 Multiply(float scalar, const Vector3& v);

	// 内積
	static float Dot(const Vector3& v1, const Vector3& v2);

	// 長さ(ノルム)
	static float Length(const Vector3& v);

	// 正規化
	static Vector3 Nomalize(const Vector3& v);

public:	// 描画処理

	// 三次元ベクトルの数値表示
	static void Vector3ScreenPrintf(int x,int y, Vector3& vector,const char* label);

};

