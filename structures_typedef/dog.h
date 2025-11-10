#ifndef DOG_H
#define DOG_H

#include <stddef.h>

/**
 * struct dog - represents a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/* Typedef for struct dog */
typedef struct dog dog_t;

/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
