#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure that connects with dog
 * @name: name of the character
 * @age: float
 * @owner: dog owner ?
 */

typedef struct dog
{
	char *name;
	float age;
	char * owner;
} dog_e;

dog_e *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif /* DOG_H */
