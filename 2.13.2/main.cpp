#include <stdio.h>
#include "Pokemon.h"

int main() {
	
	Pokemon* pikachu = new Pokemon("�s�J�`���E");
	Pokemon* pikatwo = nullptr;

	printf("�P�̖� : ");
	pikachu->PrintName("\n");

	pikachu->PrintName();
	printf("���R�s�[\n");
	
	// �R�s�[
	pikatwo = pikachu;

	printf("�Q�̖� : ");
	pikatwo->PrintName("\n");

	printf("�I������ɂ͉���������͂��AEnter�L�[�������Ă�������\n");
	int iEnd = 0;
	while (scanf_s("%d", &iEnd), iEnd > 0);

	return 0;
}