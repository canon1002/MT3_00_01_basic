#include <Novice.h>
#include"MyVector.h"

const char kWindowTitle[] = "LD2A_12_ワタナベユウタ";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(_In_ HINSTANCE, _In_opt_ HINSTANCE,_In_ LPSTR,_In_ int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	Vector3 v1{ 1.0f,3.0f,-5.0f };
	Vector3 v2{ 4.0f,-1.0f,2.0f };
	float k = { 4.0f };

	Vector3 resultAdd = MyVector::Add(v1, v2);
	Vector3 resultSubtract = MyVector::Subtract(v1, v2);
	Vector3 resultMultiply = MyVector::Multiply(k, v1);
	float resultDot = MyVector::Dot(v1, v2);
	float resultLength = MyVector::Length(v1);
	Vector3 resultNomalize = MyVector::Nomalize(v2);


	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		///
		/// ↓更新処理ここから
		///

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

		MyVector::Vector3ScreenPrintf(0, 0, resultAdd, ": Add");
		MyVector::Vector3ScreenPrintf(0, 20, resultSubtract, ": Subtract");
		MyVector::Vector3ScreenPrintf(0, 40, resultMultiply, ": Multiply");
		Novice::ScreenPrintf(0, 60, "%.02f : Dot", resultDot);
		Novice::ScreenPrintf(0, 80, "%.02f : Length", resultLength);
		MyVector::Vector3ScreenPrintf(0, 100, resultNomalize, ": Nomalize");


		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
