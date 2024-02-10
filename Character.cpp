#include "Character.h"

Character::Character(const char* name) {
	name_ = name;
}

void Character::Play() {
	cout << name_ << endl;
}