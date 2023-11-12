#include<stdio.h>
#include"math/Rectangle.h"
#include"math/Circle.h"

int main()
{
	Ishape* rectangle_ = new Rectangle();

	rectangle_->SetSiz({ 10.0f,10.0f });
	rectangle_->Siz();
	rectangle_->Draw();

    Ishape* circle_ = new Circle();
    
    circle_->SetSiz({ 10.0f,10.0f });
    circle_->Siz();
    circle_->Draw();
    
    delete rectangle_;
    delete circle_;

	return 0;
}