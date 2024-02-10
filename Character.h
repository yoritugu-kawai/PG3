#pragma once
#include"Game.h"
class Character : public Game {
public:
	Character(const char* name);
	void Play() override;
};