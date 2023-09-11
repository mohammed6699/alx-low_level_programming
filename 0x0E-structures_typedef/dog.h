#ifndef DOG_H
#define DOG_H

/**
 * struct dog - atructure to input the dpg's info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner's name
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
