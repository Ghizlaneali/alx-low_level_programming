#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a dog
 *
 * @d: dog to print
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
	{
		return;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
