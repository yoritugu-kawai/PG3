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


	printf("さいころの値は%dだよ\n", rndNum);

	if (rndNum % 2 == 0 && *answer % 2 == 0) {
		printf("正解!\n");
	}
	else if (rndNum % 2 == 1 && *answer % 2 == 1) {
		printf("正解!!\n");
	}
	else {
		printf("いただきやす・・\n");
	}
}

void Taut(Func p, int answer) {
	printf("さあはったはった\n\n");
	
	Sleep(3 * 1000);



	p(&answer);
}

int main() {


	
	printf("丁なら2を\n");
	printf("半なら1を\n");


	int answer = 0;
	scanf_s("%d", &answer);


	Func wait;
	wait = Dinghan;
	//答えがGetDiceNumber
	Taut(wait, answer);




	return 0;
}