//g++ main.cpp  -std=c++11 -O3 -mtune=native -march=native -flto
#include "Game/Game.hpp"
#include "Match/Match.hpp"
#include <vector>
#include <iostream>

int main(int argc, char const *argv[]){
	const int acc = 32;
	std::vector<paramScore> data(acc+1);
	std::vector<int> v(2);

	for (int i = 0; i <= acc; i++) {
		v[0] = i;
		v[1] = acc-i;
		data[i].param = v;
	}

	int playcount = 0;
	for (int i = 0; i <= acc; ++i){
		for (int j = 0; j <= acc; ++j){
			Match match;
			if (i == j){
				continue;
			}
			playcount++;
			std::cout << i << " " << j << '\n';
			std::cout << data[i].param[0] << ":" << data[i].param[1] << " v.s. ";
			std::cout << data[j].param[0] << ":" << data[j].param[1] << " \n";
			std::cout << "playcount : " << playcount << "/" << acc*acc+acc << '\n';
			match.match(&data[i], &data[j]);
			std::cout << '\n';
		}
	}
	for (int i = 0; i <= acc; ++i){
		std::cout << data[i].param[0] << ":" << data[i].param[1] << " ";
		std::cout << data[i].score << '\n';
	}
	return 0;
}
