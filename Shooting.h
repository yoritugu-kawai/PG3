#pragma once
#include"Game.h"

class Shooting : public Game {
public:
	Shooting(const char* name);
	void Play() override;
};
