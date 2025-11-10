#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

/* Function prototypes */
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
