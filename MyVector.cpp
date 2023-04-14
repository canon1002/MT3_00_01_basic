#include "MyVector.h"
#include <Novice.h>
#include <cmath>

// 加算
 Vector3 MyVector::Add(const Vector3& v1, const Vector3& v2) {

	return Vector3{
		v1.x + v2.x,
		v1.y + v2.y,
		v1.z + v2.z,
	};

}

// 減算
 Vector3 MyVector::Subtract(const Vector3& v1, const Vector3& v2) {

	return Vector3{
		v1.x - v2.x,
		v1.y - v2.y,
		v1.z - v2.z,
	};

}

// スカラー倍
 Vector3 MyVector::Multiply(float scalar, const Vector3& v) {

	return Vector3{
		scalar * v.x ,
		scalar * v.y ,
		scalar * v.z ,
	};

}

// 内積
 float MyVector::Dot(const Vector3& v1, const Vector3& v2) {

	return float{ (v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z) };

}

// 長さ
 float MyVector::Length(const Vector3& v) {

	 return float{ sqrt(Dot(v,v))};

}

// 正規化
 Vector3 MyVector::Nomalize(const Vector3& v) {

	return Vector3{
		v.x / Length(v),
		v.y / Length(v),
		v.z / Length(v)
	};

}

// 表示
 void MyVector::Vector3ScreenPrintf(int x, int y, Vector3& vector, const char* label) {
	Novice::ScreenPrintf(x, y, "%3.2f", vector.x);
	Novice::ScreenPrintf(x + 80, y , "%3.2f", vector.y);
	Novice::ScreenPrintf(x + 160, y , "%3.2f", vector.z);
	Novice::ScreenPrintf(x + 240, y , "%s", label);
}