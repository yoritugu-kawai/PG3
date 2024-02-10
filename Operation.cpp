#include "Operation.h"

Operation::Operation(const char* name) {
	name_ = name;
}

void Operation::Play() {
	cout << name_ << endl;
}