#include<stdio.h>
#include<random>
#include<Windows.h>
#include<functional>
typedef void (*Func)(int*);
int GetDiceNumber() {
	std::random_device random;
	return random() % 6 + 1;
}

void Dinghan(int* answer) {
	

	int rndNum = GetDiceNumber();


	printf("��������̒l��%d����\n", rndNum);

	if (rndNum % 2 == 0 && *answer % 2 == 0) {
		printf("��!\n");
	}
	else if (rndNum % 2 == 1 && *answer % 2 == 1) {
		printf("��!!\n");
	}
	else {
		printf("���������₷�E�E\n");
	}
}

void Taut(Func p, int answer) {
	printf("�����͂����͂���\n\n");
	
	Sleep(3 * 1000);



	p(&answer);
}

int main() {


	
	printf("���Ȃ�2��\n");
	printf("���Ȃ�1��\n");


	int answer = 0;
	scanf_s("%d", &answer);


	Func Okay;
	Okay = Dinghan;
	//������GetDiceNumber
	Taut(Okay, answer);




	return 0;
}