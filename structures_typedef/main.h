#ifndef DOG_H
#define DOG_H

#include <stddef.h>

/**
 * struct dog - represents a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner's name
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/* Function prototypes */
void print_dog(struct dog *d);

#endif /* DOG_H */
