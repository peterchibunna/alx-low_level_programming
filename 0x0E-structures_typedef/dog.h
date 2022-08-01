#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: Owner of dog
 **/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} description;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
