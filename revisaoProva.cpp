// revisaoProva.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
int main() {
	const char espaco = '.';
	const char parede = '#';
	const char queijo = 'Q';
	const char entrada = 'E';


#define rato_h

	bool andar(char labirinto[5][5]), int x, int y, char deOndeVeio, bool& queijo){
	labirinto[x][y] = 'R';
	if (queijo == true) {
		return true;
	}
	else if (labirinto[x][y] == 'Q') {
		return true;
	}
	else if (labirinto[x][y] == 'E') {
		return false;
	}
	else if (labirinto[x][y] == 'P') {
		return false;
	}
	else if (labirinto[x > 5 || x < 5]) {
		return false;
	}
	else if (labirinto[y > 5 || y < 5]) {
		return false;
	}
	
	
	
	
	
	bool procurarQueijoNaoImplementado(char labirinto[largura][altura], int posX, int posY, int deOndeVeio, bool& temQueijo); {
		if (posX < 0 || posX = > largura || posY >= altura) {
			return false;
		}
		else if (labirinto[posX][posY] == queijo) {
			//mexer no mapa
			return true;
		}
		else if (labirinto[posX][posY] == parede || labirinto[posX][posY]) == visitando{
		   return false;
		}else{
			//mexerNoMapa
			//mostrarMapa
			if (deOndeVeio != baixo and procurarQueijoNaoImplementado(labirinto, posX, posY+1)
	

void exibirMapa(char mapa[largura][altura]) {
		for (int i = 0; i < largura; i++) {}
	} -