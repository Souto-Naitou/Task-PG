#include <stdio.h>
#include "Pokemon.h"

int main() {
	
	Pokemon* pikachu = new Pokemon("ピカチュウ");
	Pokemon* pikatwo = nullptr;

	printf("１体目 : ");
	pikachu->PrintName("\n");

	pikachu->PrintName();
	printf("をコピー\n");
	
	// コピー
	pikatwo = pikachu;

	printf("２体目 : ");
	pikatwo->PrintName("\n");

	printf("終了するには何かしら入力し、Enterキーを押してください\n");
	int iEnd = 0;
	while (scanf_s("%d", &iEnd), iEnd > 0);

	return 0;
}