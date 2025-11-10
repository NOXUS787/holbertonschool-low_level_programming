#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0')
        len++;
    return (len);
}

/**
 * _strcopy - Copies a string from src to dest
 * @dest: destination buffer
 * @src: source string
 * Return: pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

/**
 * new_dog - Creates a new dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to new dog or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    char *name_copy, *owner_copy;

    if (!name || !owner)
        return (NULL);

    dog = malloc(sizeof(dog_t));
    if (!dog)
        return (NULL);

    name_copy = malloc(sizeof(char) * (_strlen(name) + 1));
    if (!name_copy)
    {
        free(dog);
        return (NULL);
    }

    owner_copy = malloc(sizeof(char) * (_strlen(owner) + 1));
    if (!owner_copy)
    {
        free(name_copy);
        free(dog);
        return (NULL);
    }

    _strcopy(name_copy, name);
    _strcopy(owner_copy, owner);

    dog->name = name_copy;
    dog->age = age;
    dog->owner = owner_copy;

    return (dog);
}
