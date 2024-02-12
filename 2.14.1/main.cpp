#include <stdio.h>
#include "Pokemon.h"

void PrintPokemons(Pokemon& const _pokemon, int* _cnt);

int main() {

	int cnt = 1;

	Pokemon* pikachu = new Pokemon("ピカチュウ");
	Pokemon* pikatwo = new Pokemon("おじさん");

	PrintPokemons(*pikachu, &cnt);
	PrintPokemons(*pikatwo, &cnt);

	printf("転生！\n");
	pikatwo = pikachu;

	cnt = 1;
	PrintPokemons(*pikachu, &cnt);
	PrintPokemons(*pikatwo, &cnt);
	
	printf("終了するには何かしら入力し、Enterキーを押してください\n");
	int iEnd = 0;
	while (scanf_s("%d", &iEnd), iEnd > 0);

	return 0;
}

void PrintPokemons(Pokemon& const _pokemon, int* _cnt)
{
	printf("%d体目 : ", *_cnt);
	_pokemon.PrintName("\n");
	*_cnt += 1;
}
