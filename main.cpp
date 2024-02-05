#include<stdio.h>
#include"Shape/Rectangle.h"
#include"Shape/Circle.h"

int main()
{
	IShape* rectangle_ = new Rectangle();

	rectangle_->SetSize({ 10.0f,10.0f });
	rectangle_->Size();
	rectangle_->Draw();

    IShape* circle_ = new Circle();
    
    circle_->SetSize({ 10.0f,10.0f });
    circle_->Size();
    circle_->Draw();
    
    delete rectangle_;
    delete circle_;

	return 0;
}