#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: Struct to store basic information about a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* new type dog_t as an alias for struct dog */
typedef struct dog dog_t;

#endif /* DOG_H */
