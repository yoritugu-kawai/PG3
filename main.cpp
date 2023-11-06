#include<stdio.h>
#include"math/Rectangle.h"
#include"math/Circle.h"

int main()
{
	Ishape* rectangle_ = new Rectangle();

	rectangle_->SetSize({ 10.0f,10.0f });
	rectangle_->Size();
	rectangle_->Draw();

    Ishape* circle_ = new Circle();
    
    circle_->SetSize({ 10.0f,10.0f });
    circle_->Size();
    circle_->Draw();
    
    delete rectangle_;
    delete circle_;

	return 0;
}