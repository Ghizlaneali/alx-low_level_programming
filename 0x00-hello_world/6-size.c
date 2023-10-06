#include <stdio.h>

/**
 * main - Prints the size of various types based on
 *        the computer it is compiled and run on..
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("the size of a char is:%zu byte(s)\n",sizeof(char));
	printf("the size of a float is :%zu byte(s)\n",sizeof(float));
	printf("the size of an int is:%zu byte(s)\n",sizeof(int));
	printf("the size of a long is:%zu byte(s)\n",sizeof(long int));
	printf("the size of a long long is: %zu byte(s)\n", sizeof(long long int);

	return (0);
}
