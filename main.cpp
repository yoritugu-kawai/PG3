#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <functional>
#include <random>
#include<iostream>
typedef void (*Func)(int*);

//さいころ関数
int GetDiceNumber() {
	std::random_device rnd;
	return rnd() % 6 + 1;
}
void SetTimeout () {
	printf("さあはったはった\n\n");
	Sleep(3 * 1000);
};

std::function<void(int)> Dinghan = [=](int answer) {


	int rndNumber = GetDiceNumber();


	printf("さいころの目は%dだ\n", rndNumber);

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
int main() {
	//SetConsoleOutputCP(65001);

	printf("丁なら2を\n");
	printf("半なら1を\n");
	int answer = 0;
	scanf_s("%d", &answer);
	SetTimeout();

	Dinghan(answer);

	return 0;
}
