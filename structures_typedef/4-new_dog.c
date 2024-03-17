#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog structure with copies of the given strings.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 * Return: Pointer to the new dog structure, or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *p;
    char *name_copy, *owner_copy;

    /* Allocate memory for the dog structure */
    p = malloc(sizeof(dog_t));
    if (p == NULL)
        return (NULL);

    /* Allocate memory for the name string copy */
    name_copy = malloc(strlen(name) + 1);
    if (name_copy == NULL)
    {
        free(p);
        return (NULL);
    }

    /* Copy the name string into the allocated memory */
    strcpy(name_copy, name);

    /* Allocate memory for the owner string copy */
    owner_copy = malloc(strlen(owner) + 1);
    if (owner_copy == NULL)
    {
        free(name_copy);
        free(p);
        return (NULL);
    }

    /* Copy the owner string into the allocated memory */
    strcpy(owner_copy, owner);

    /* Set the fields of the dog structure */
    p->name = name_copy;
    p->age = age;
    p->owner = owner_copy;

    return (p);
}
