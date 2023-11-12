#include<stdio.h>
#include<Windows.h>
#include"Enemy/Enemy.h"

int main()
{
	Enemy* enemy = new Enemy();
	enemy->Init();

	bool isGame = true;

	while (isGame)
	{
		enemy->Update();

		isGame = enemy->GetIsGameLoop();
	}
	printf("終了\n");
	delete enemy;
	return 0;
}
