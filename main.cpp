#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <functional>
#include <random>
#include<iostream>

void SetTimeOut(std::function<void()> function, int second) {
	Sleep(second * 1000);
	function();
}

int PlayerChallenge() {
	int playerChallenge = 0;

	while (playerChallenge != 1 && playerChallenge != 2) {
		std::cout << "奇数か偶数か選択しEnterを押せ!!" << std::endl;
		std::cout << "1 : 奇数, 2 : 偶数" << std::endl;
		std::cin >> playerChallenge;
	}
	return playerChallenge;
}

int main(void) {
	std::random_device rd;
	std::mt19937 mt(rd());

	int playerChallenge = PlayerChallenge();

	std::function<int()> diceRotation = [&mt]() {
		return mt() % 6 + 1;
	};

	int diceResult = diceRotation();

	std::function<void()> result = [&]() {
		std::cout << "さいころの出目は " << diceResult;
		std::cout << " で";
		std::cout << (diceResult % 2 == 0 ? "偶数" : "奇数");
		std::cout << " だ" << std::endl;

		if ((diceResult % 2 == 0 && playerChallenge == 2) || (diceResult % 2 == 1 && playerChallenge == 1)) {
			std::cout << "当たりや" << std::endl;
		}
		else {
			std::cout << "はずれや" << std::endl;
		}
	};

	SetTimeOut(result, 3);

	return 0;
}