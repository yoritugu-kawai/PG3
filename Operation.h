#pragma once
#include"Game.h"

class Operation : public Game {
public:
	Operation(const char* name);
	void Play() override;
};
