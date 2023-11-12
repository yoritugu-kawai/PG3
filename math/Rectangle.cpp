#include "Rectangle.h"

void Rectangle::Siz()
{
	float result = GetSiz().x* GetSiz().y;
	SetArea(result);
}

void Rectangle::Draw()
{
	printf("横=%0.3f\n", GetSiz().x);
	printf("縦=%0.3f\n", GetSiz().y);
	printf("面積=%0.3f\n",GetArea());
}
