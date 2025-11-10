#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/**
 * struct dog - represents a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/* Function prototypes */
void print_dog(struct dog *d);

#endif /* MAIN_H */
