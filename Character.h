#pragma once
#include"Combo.h"

class Character : public Combo
{
public:
	Character() {};
	~Character();

	void play()override;
private:

};