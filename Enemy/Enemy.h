#pragma once
#include<stdio.h>
#include<Windows.h>

class Enemy
{
public:
	Enemy();
	~Enemy();

	void Initialize();

	void Update();

	bool GetGameLoop() { return GameLoop_; }

private:

	void Approach();
	void Leave();

	enum class Phase {
	     Aprroach,
	     Leave
	};
	
	Phase phase_{};

	//メンバ関数ポインタテーブル
	static void (Enemy::* sPhaseTable_[])();

	const int PhaseTimerMax_ = 5;
	int PhaseTimer_ = PhaseTimerMax_;

	bool GameLoop_ = true;
};