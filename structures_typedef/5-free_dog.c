#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog structure
 * @d: Pointer to dog structure to free
 */
void free_dog(dog_t *d)
{
    if (!d)
        return;

    if (d->name)
        free(d->name);
    if (d->owner)
        free(d->owner);

    free(d);
}
