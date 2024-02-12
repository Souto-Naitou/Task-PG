#include "Define/Defines.h"
#include <Novice.h>
#include "PlayField.h"
#include <memory>
#include "KeyManager.h"

const char kWindowTitle[] = "学籍番号";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	std::unique_ptr<PlayField> playField = std::make_unique<PlayField>();


	using KM = KeyManager;
	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		///
		/// ↓更新処理ここから
		///
		KM::GetKeyState();

		playField->Update();

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

		playField->Draw();


		Novice::ScreenPrintf(15, 15, "Move : WASD");
		Novice::ScreenPrintf(15, 40, "Shot : SPACE");
		Novice::ScreenPrintf(15, 65, "EnemySpawn : R");
		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (KM::GetPreKeys(DIK_ESCAPE) == 0 && KM::GetKeys(DIK_ESCAPE) != 0) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
