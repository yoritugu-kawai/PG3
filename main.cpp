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


	printf("‚³‚¢‚±‚ë‚Ì’l‚Í%d‚¾‚æ\n", rndNum);

	if (rndNum % 2 == 0 && *answer % 2 == 0) {
		printf("’š!\n");
	}
	else if (rndNum % 2 == 1 && *answer % 2 == 1) {
		printf("”¼!!\n");
	}
	else {
		printf("‚¢‚½‚¾‚«‚â‚·EE\n");
	}
}

void Taut(Func p, int answer) {
	printf("‚³‚ ‚Í‚Á‚½‚Í‚Á‚½\n\n");
	
	Sleep(3 * 1000);



	p(&answer);
}

int main() {


	
	printf("’š‚È‚ç2‚ğ\n");
	printf("”¼‚È‚ç1‚ğ\n");


	int answer = 0;
	scanf_s("%d", &answer);


	Func Okay;
	Okay = Dinghan;
	//“š‚¦‚ªGetDiceNumber
	Taut(Okay, answer);




	return 0;
}