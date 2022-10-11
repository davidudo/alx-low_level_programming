#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains details about a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the dog's owner
 *
 * Description: holds all details pertaining to a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 *
 * Description: New data structure type of struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
