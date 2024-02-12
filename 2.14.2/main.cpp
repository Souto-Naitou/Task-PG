#include <stdio.h>
#include "Vector2.h"

void PrintValue(const Vector2& _vec, const char* _begin = "", const char* _last = "");

int main() 
{
	
	Vector2 a = { 4, 8 };
	Vector2 b = { -2, 3 };

	printf("a(x, y): ");
	PrintValue(a, "", "\n");

	printf("b(x, y): ");
	PrintValue(b, "", "\n");

	printf("a + b = ");
	PrintValue(a + b, "(", ")\n");

	printf("a - b = ");
	PrintValue(a - b, "(", ")\n");

	printf("I—¹‚·‚éê‡‚Í‰½‚©‚µ‚ç‚ð“ü—Í‚µAEnter‰Ÿ‚µ‚Ä‚­‚¾‚³‚¢\n");
	int iEnd = 0;
	while (scanf_s("%d", &iEnd), iEnd > 0);

	return 0;
}

void PrintValue(const Vector2& _vec, const char* _begin, const char* _last)
{
	printf("%s%f, %f%s", _begin, _vec.x, _vec.y, _last);
}
