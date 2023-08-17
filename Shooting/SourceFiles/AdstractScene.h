#pragma once

//デフォルトの抽象シーンクラス
class AbstractScene {
private:
	int num = 0;
	void a() {
		num = 0;
	}
public:
	//デストラクタ
	virtual ~AbstractScene() {};

	//描画以外の更新を実装する
	virtual AbstractScene* Update() = 0;

	//描画に関することを実行する
	virtual void Draw() const = 0;
};
