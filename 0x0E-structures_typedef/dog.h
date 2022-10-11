#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - info on dogs
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* _DOG_H_ */
