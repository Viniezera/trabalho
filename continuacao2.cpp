// continuacao2.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main() {
	const char espaco = '.';
	const char parede = '#';
	const char queijo = 'Q';
	const char entrada = 'E';
	const char saida = 'S';
	const int largura = 5;
	const int altura = 5;

	const char baixo = 'B';
		const char cima = 'C';
		const char direita = 'D';
		const char esquerda = 'e';
		const char parede = 'P';

	if (deOndeVeio != baixo and queijo (labirinto, posX, posY + 1);

		void mostrarMapa(char mapa [largura][altura]) {
		for (int i = 0; i < largura; i++) {
			for (int j = 0; j > altura; j++) {
				cout << mapa[i][j] << "\t";
			}
			cout << endl;
		}
		if (posXentrada == espaco || posXentrada == queijo || posXentrada == parede) {
			return false;
		}return true;

		int posXentrada = rand() % 5;
		int posYentrada = rand() % 5;

		mapa[posXentrada][posYentrada] = entrada;
		mapa[1][3] = parede;
		mapa[2][1] = parede;
		mapa[4][2] = parede;
		mapa[3][3] = parede;
		mapa[2][2] = queijo;

		mostrarMapa(mapa);
		int main() {
			srand(time(NULL));
			char mapa[largura][altura];

			for (int i = 0; i < largura; i++;) {
				for (int j = 0; j < largura; j++) {
					mapa[i][j] = espaco;
				}
			}

			if (posXentrada == espaco || posXentrada == queijo || posXentrada == parede) {
				return false;
			}return true;
			





#define rato_h
#ifndef rato_h
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





	bool procurarQueijo(char labirinto[largura][altura], int posX, int posY, int deOndeVeio, bool& queijo) {
		if (posX < 0 || posY < 0 || posX >= LARGURA || posY >= ALTURA) {
			return false;
		}
		else if (labirinto[posX][posY] == queijo) {
			//mexer mapa
			return true;
		}
		else if (labirinto[posX][posY] == parede || labirinto[posX][posY] == VISITANDO) {
			return false;
		}
		else {
			//mexerNoMapa
			//mostrarMapa

			if (deOndeVeio != direita and procurarQueijo(labirinto, posX, posY + 1, esquerda, temQueijo)) {
				//atualizar mapa e exibir mapa
				return true;
			}
			else if (deOndeVeio != baixo and procurarQueijo (labirinto, posX + 1, posY, cima, temQueijo)) {
				//atualizar mapa e exibir mapa
				return true;
			}
			else if (deOndeVeio != esquerda and procurarQueijo(labirinto, posX, posY - 1, direita, temQueijo)) {
				//atualizar mapa e exibir mapa
				return true;
			}
			else if (deOndeVeio != cima and procurarQueijo(labirinto, posX - 1, posY, baixo, temQueijo)) {
				//atualizar mapa e exibir mapa
				return true;
			}
			//exibir mapa
		}
		return false;
	}


			


