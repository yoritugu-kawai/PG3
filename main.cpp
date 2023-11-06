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


	printf("さいころを振って奇数か偶数を当てるゲーム\n\n");
	printf("奇数だと思うなら1\n");
	printf("偶数だと思うなら2を押してね\n");


	int answer = 0;
	scanf_s("%d", &answer);

	std::function<void()> SetTimeout = []() {
		printf("さて答えはなんだろな\n\n");
		
		Sleep(3 * 1000);
	};


	SetTimeout();


	std::function<void(int)> DisplayResult = [](int answer) {
	

		int rndNumber = GetDiceNumber();


		printf("さいころの値は%dだよ\n", rndNumber);

		if (rndNumber % 2 == 0 && answer % 2 == 0) {
			printf("正解!!\n");
		}
		else if (rndNumber % 2 == 1 && answer % 2 == 1) {
			printf("正解!!\n");
		}
		else {
			printf("不正解・・\n");
		}
	};

	DisplayResult(answer);

	return 0;
}