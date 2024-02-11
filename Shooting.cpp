#include "Shooting.h"

Shooting::Shooting(const char* name) {
	name_ = name;
}

void Shooting::Play() {
	cout << name_ << endl;
}