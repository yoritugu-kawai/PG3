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


	printf("���������U���Ċ�������𓖂Ă�Q�[��\n\n");
	printf("����Ǝv���Ȃ�1\n");
	printf("�������Ǝv���Ȃ�2�������Ă�\n");


	int answer = 0;
	scanf_s("%d", &answer);

	std::function<void()> SetTimeout = []() {
		printf("���ē����͂Ȃ񂾂��\n\n");
		
		Sleep(3 * 1000);
	};


	SetTimeout();


	std::function<void(int)> DisplayResult = [](int answer) {
	

		int rndNumber = GetDiceNumber();


		printf("��������̒l��%d����\n", rndNumber);

		if (rndNumber % 2 == 0 && answer % 2 == 0) {
			printf("����!!\n");
		}
		else if (rndNumber % 2 == 1 && answer % 2 == 1) {
			printf("����!!\n");
		}
		else {
			printf("�s�����E�E\n");
		}
	};

	DisplayResult(answer);

	return 0;
}