#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <functional>
#include <random>
typedef void (*Func)(int*);

//さいころ関数
int GetDiceNumber() {
	std::random_device rnd;
	return rnd() % 6 + 1;
}
int main() {


	printf("丁なら2を\n");
	printf("半なら1を\n");

	int answer = 0;
	scanf_s("%d", &answer);

	std::function<void()> Taut = []() {
		printf("さあはったはった\n\n");
		Sleep(3 * 1000);
	};


	Taut();


	std::function<void(int)> Dinghan = [](int answer) {
	

		int rndNumber = GetDiceNumber();


		printf("さいころの値は%dだよ\n", rndNumber);

		if (rndNumber % 2 == 0 && answer % 2 == 0) {
			printf("丁!!\n");
		}
		else if (rndNumber % 2 == 1 && answer % 2 == 1) {
			printf("半!!\n");
		}
		else {
			printf("終わりだな・・\n");
		}
	};

	Dinghan(answer);

	return 0;
}
