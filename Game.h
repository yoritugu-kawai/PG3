#pragma once


#include <iostream>
using namespace std;

class Game {
public:
	virtual void Play();

protected:
	const char* name_;
};