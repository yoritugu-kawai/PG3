#pragma once
#include"Game.h"
class Action : public Game {
public:
	Action(const char* name);
	void Play() override;
};