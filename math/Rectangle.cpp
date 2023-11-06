#include "Rectangle.h"

void Rectangle::Size()
{
	float result = GetSize().x* GetSize().y;
	SetArea(result);
}

void Rectangle::Draw()
{
	printf("横=%0.3f\n", GetSize().x);
	printf("縦=%0.3f\n", GetSize().y);
	printf("面積=%0.3f\n",GetArea());
}
