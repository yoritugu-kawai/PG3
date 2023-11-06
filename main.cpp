#include"Game.h"
#include"FeelsGood.h"

int main(void) 
{
	Combo* combo[2];

	for (int i = 0; i < 2; i++)
	{
		combo[i] = new Combo();
		combo[i]->play();

		if (i == 0)
		{
			combo[i] = new Game();
			combo[i]->play();
			delete combo[i];
		}

		if (i == 1)
		{
			combo[i] = new FeelsGood();
			combo[i]->play();
			delete combo[i];
		}
	}

	return 0;
}