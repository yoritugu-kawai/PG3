#include"Shooting.h"
#include"Action.h"

int main(void) {
	const size_t kCount = 2;
	Game* game[kCount];

	game[0] = new Shooting("シューティングゲーム");
	game[1] = new Action("アクションゲーム");

	for (size_t i = 0; i < kCount; i++) {
		game[i]->Play();
	}

	for (size_t i = 0; i < kCount; i++) {
		delete game[i];
	}

	return 0;
}