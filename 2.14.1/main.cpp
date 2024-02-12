#include <stdio.h>
#include "Pokemon.h"

void PrintPokemons(Pokemon& const _pokemon, int* _cnt);

int main() {

	int cnt = 1;

	Pokemon* pikachu = new Pokemon("�s�J�`���E");
	Pokemon* pikatwo = new Pokemon("��������");

	PrintPokemons(*pikachu, &cnt);
	PrintPokemons(*pikatwo, &cnt);

	printf("�]���I\n");
	pikatwo = pikachu;

	cnt = 1;
	PrintPokemons(*pikachu, &cnt);
	PrintPokemons(*pikatwo, &cnt);
	
	printf("�I������ɂ͉���������͂��AEnter�L�[�������Ă�������\n");
	int iEnd = 0;
	while (scanf_s("%d", &iEnd), iEnd > 0);

	return 0;
}

void PrintPokemons(Pokemon& const _pokemon, int* _cnt)
{
	printf("%d�̖� : ", *_cnt);
	_pokemon.PrintName("\n");
	*_cnt += 1;
}
