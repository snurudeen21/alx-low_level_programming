#include "main.h"
#include <stdio.h>

/**
 * main - Print the arguments to the program
 * @argc: Counts arguments
 * @argv: Arguments
 * Return: 0
 */

int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
	return (0);
}
