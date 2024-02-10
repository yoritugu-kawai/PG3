#include<stdio.h>
#include"Shape/Rectangle.h"
#include"Shape/Circle.h"


int main(void) {
	const size_t count = 2;
	IShape* shape[count];

	shape[0] = new Circle(8.0f);
	shape[1] = new Rectangle(4.0f, 11.0f);

	for (size_t i = 0; i < count; i++) {
		shape[i]->Size();
		shape[i]->Draw();
	}

	for (size_t i = 0; i < count; i++) {
		delete shape[i];
	}

	return 0;
}