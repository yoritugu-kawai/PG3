#include <stdio.h>
#include <string>
#include <chrono>
#include <iostream>

int main() {

	int i = 1;
	const int text_ = 100000;
	std::string a(text_, 'a');
	std::cout << text_ << "文字コピーと移動を比較\n";

	std::chrono::steady_clock::time_point start_ = std::chrono::steady_clock::now();
	std::string a2 = a;
	std::chrono::steady_clock::time_point end_ = std::chrono::steady_clock::now();

	auto result_ = std::chrono::duration_cast<std::chrono::microseconds>(end_ - start_).count();

	std::cout << "コピー" << "\n";
	std::cout << result_ << "\n";
	std::chrono::steady_clock::time_point start2_ = std::chrono::steady_clock::now();
	std::string a3 = std::move(a);
	std::chrono::steady_clock::time_point end2_ = std::chrono::steady_clock::now();

	auto result2_ = std::chrono::duration_cast<std::chrono::microseconds>(end2_ - start2_).count();

	std::cout << "移動" << "\n";
	std::cout << result2_ << " \n";


	return 0;
}