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

	bool GetGameLoop() { return isGameLoop_; }

private:

	void Approach();
	void Attack();
	void Leave();

	enum class Phase {
		Approach,
		Attack,
		Leave,
	};

	Phase phase_{};

	static void (Enemy::* sPhaseTable_[])();

	const int PhaseTimerMax_ = 5;
	int PhaseTimer_ = PhaseTimerMax_;

	bool isGameLoop_ = true;
};