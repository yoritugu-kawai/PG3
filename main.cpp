#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <functional>
#include <random>
typedef void (*Func)(int*);

//��������֐�
int GetDiceNumber() {
	std::random_device rnd;
	return rnd() % 6 + 1;
}
int main() {


	printf("���Ȃ�2��\n");
	printf("���Ȃ�1��\n");

	int answer = 0;
	scanf_s("%d", &answer);

	std::function<void()> Taut = []() {
		printf("�����͂����͂���\n\n");
		Sleep(3 * 1000);
	};


	Taut();


	std::function<void(int)> Dinghan = [](int answer) {
	

		int rndNumber = GetDiceNumber();


		printf("��������̒l��%d����\n", rndNumber);

		if (rndNumber % 2 == 0 && answer % 2 == 0) {
			printf("��!!\n");
		}
		else if (rndNumber % 2 == 1 && answer % 2 == 1) {
			printf("��!!\n");
		}
		else {
			printf("�I��肾�ȁE�E\n");
		}
	};

	Dinghan(answer);

	return 0;
}
