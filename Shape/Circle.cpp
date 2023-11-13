#include "Circle.h"

void Circle::Siz()
{
	float result = GetSiz().x * GetSiz().y * std::numbers::pi;
	SetArea(result);
}

void Circle::Draw()
{
	printf("半径x=%0.3f\n", GetSiz().x);
	printf("半径y=%0.3f\n", GetSiz().y);
	printf("円周率=%0.3f\n", float(std::numbers::pi));
	printf("面積=%0.3f\n", GetArea());
}
