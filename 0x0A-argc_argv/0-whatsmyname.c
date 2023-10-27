#include <stdio.h>

/**
 * main - prints the name of the program, followed by a new line.
 * @argc : number of arguments.
 * @argv : array that contains the arguments.
 * Return : always 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
