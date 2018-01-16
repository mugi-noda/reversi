//g++ cui.cpp -std++11 -O3 -mtune=native -march=native -flto
#include "Game/Game.hpp"

void sente(){
	Game game;
	game.show();
	while(!game.isGameover()){
		if(game.isGameover()){
			break;
		}
		game.playerMove();
		game.show();
		if(game.isGameover()){
			break;
		}
		game.aiMove();
		game.show();
	}
}

void gote(){
	Game game;
	game.show();
	while(!game.isGameover()){
		if(game.isGameover()){
			break;
		}
		game.aiMove();
		game.show();
		if(game.isGameover()){
			break;
		}
		game.playerMove();
		game.show();
	}
}

int main(){
	std::cout << "sente:1, gote:0" << '\n';
	int hoge = 0;
	std::cin >> hoge;
	if (hoge == 0){
		gote();
	}else	if(hoge == 1){
		sente();
	}
	return 0;
}
