#include<stdio.h>
#include<random>
#include<Windows.h>
#include<functional>
#include <iostream>

using namespace std;

std::random_device rd;
std::mt19937 mt(rd());

int Dice() {
	return mt() % 6 + 1;
}

typedef void (*pFunction)(int a, int b);

void SetTimeOut(pFunction function, int second, int diceRolling, int player) {
	Sleep(second * 1000);
	function(diceRolling, player);
}

void Result(int diceRolling, int player) {
	cout << "�T�C�R���̏o�ڂ�" << diceRolling << "��";
	cout << (diceRolling % 2 == 0 ? "����" : "�") << "��" << endl;

	if ((diceRolling % 2 == 0 && player == 2) || (diceRolling % 2 == 1 && player == 1)) {
		cout << "������" << endl;
	}
	else {
		cout << "�O��" << endl;
	}
}

int PlayerChallenge() {
	int player = 0;

	while (player != 1 && player != 2) {
		cout << "���������I������Enter������!!" << std::endl;
		cout << "1 : �, 2 : ����" << endl;
		cin >> player;
	}

	return player;
}

int main(void) {
	int player = PlayerChallenge();
	int diceRolling = Dice();

	pFunction result = Result;
	SetTimeOut(result, 3, diceRolling, player);

	return 0;
}