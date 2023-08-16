#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialize variable of type struct dog
 * @d: Pointer of struct dog which is initialized
 * @name: Name which is initialized
 * @age: Age to be initialized
 * @owner: Owner to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}




