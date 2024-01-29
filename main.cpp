#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <thread>


void DisplayText(std::string name) {
	std::cout << name << std::endl;
}

int Add(int a, int b) {
	int result = a + b;
	std::cout << result << "\n";
	return result;
}

int Subtract(int a, int b) {
	return a - b;
}

int Multiply(int a, int b) {
	return a * b;
}

int Division(int a, int b) {
	return a / b;
}


int main() {
	std::vector<std::string> threadName{ "thread 1","thread 2","thread 3" };

	//1つ目
	std::thread th1(DisplayText, threadName[0]);
	th1.join();

	//2つ目
	std::thread th2(DisplayText, threadName[1]);
	th2.join();

	//3つ目
	std::thread th3(DisplayText, threadName[2]);
	th3.join();
	return 0;
}