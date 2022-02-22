#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure that connects with dog
 * @name: name of the character
 * @age: float
 * @owner: dog owner ?
 */

typedef struct dog_e
{
	char *name;
	char *owner;
	float age;
} dog_e;

dog_e *new_dog(char *name, float 
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
