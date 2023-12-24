#include <stdio.h>
#include <stdlib.h>
#include <list>
#include <iostream>
#include <vector>
#include <algorithm>


int main() {

	std::list<const char*> list = {
		"Tokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani","Nippori", "Tabata","Komagome",
		"Sugamo","Otsuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya",
		"Ebisu","Meguro","Gotanda","Osaki","Shinagawa", "Tamachi","Hamamatsucho","Shimbashi","Yurakucyo",
	};

	std::cout << "1970に山手線開業" << std::endl;
	for (auto itr = list.begin(); itr != list.end(); ++itr) {

		std::cout << *itr << std::endl;
	}

	for (auto itr = list.begin(); itr != list.end(); ++itr) {

		if (*itr == "Tabata") {

			itr = list.insert(itr, "Nishi-Nipporo");

			++itr;
		}
	}

	std::cout << "\n2019年に西日暮里駅追加" << std::endl;
	for (auto itr = list.begin(); itr != list.end(); ++itr) {

		std::cout << *itr << std::endl;
	}

	for (auto itr = list.begin(); itr != list.end(); ++itr) {

		if (*itr == "Tamachi") {

			itr = list.insert(itr, "Takanawa GateWay");

			++itr;
		}
	}

	std::cout << "\n2022年に高輪ゲートウェイ駅追加" << std::endl;
	for (auto itr = list.begin(); itr != list.end(); ++itr) {

		std::cout << *itr << std::endl;
	}

	return 0;
}