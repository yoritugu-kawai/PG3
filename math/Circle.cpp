#include "Circle.h"

void Circle::Size()
{
	float result = GetSize().x * GetSize().y * std::numbers::pi;
	SetArea(result);
}

void Circle::Draw()
{
	printf("半径x=%0.3f\n", GetSize().x);
	printf("半径y=%0.3f\n", GetSize().y);
	printf("円周率=%0.3f\n", float(std::numbers::pi));
	printf("面積=%0.3f\n", GetArea());
}
