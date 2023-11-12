#include"Number.h"
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	
	Number<int, int>int_Int;
	int_Int.SetNumber(2, 4);
	cout << int_Int.Min() << endl;

	
	Number<int, float>int_Float;
	int_Float.SetNumber(6, 4.0f);
	cout << int_Float.Min() << endl;

	
	Number<int, double>int_Double;
	int_Double.SetNumber(7, 6.0);
	cout << int_Double.Min() << endl;

	
	Number<float, float>float_Float;
	float_Float.SetNumber(2.0f, 4.0f);
	cout << float_Float.Min() << endl;

	Number<float, double>float_Double;
	float_Double.SetNumber(2.0f, 4.0);
	cout << float_Double.Min() << endl;

	
	Number<double, double>double_Double;
	double_Double.SetNumber(7.0, 3.0);
	cout << double_Double.Min() << endl;

	return 0;
}
