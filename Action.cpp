#include "Action.h"

Action::Action(const char* name) {
	name_ = name;
}

void Action::Play() {
	cout << name_ << endl;
}