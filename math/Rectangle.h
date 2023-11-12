#pragma once
#include"Ishape.h"
#include<stdio.h>

class Rectangle : public Ishape
{
public:
	Rectangle() {};
	~Rectangle() {};

	void Siz()override;

	void Draw()override;
private:

};

