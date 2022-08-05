#include <stdio.h>

/**
 *mod - modulus of a & b.
 *@a: first number
 *@b: second number
 *Return: modu of a & b.
 */

int mod(int a, int b)
{
	int modu;

	modu = a % b;
	return (modu);
}
