#include"Operation.h"
#include"Character.h"

int main(void) {
	const size_t kCount = 2;
	Game* game[kCount];

	game[0] = new Operation("コンボしたい");
	game[1] = new Character("コンボ気持ち良すぎ");

	for (size_t i = 0; i < kCount; i++) {
		game[i]->Play();
	}

	for (size_t i = 0; i < kCount; i++) {
		delete game[i];
	}

	return 0;
}