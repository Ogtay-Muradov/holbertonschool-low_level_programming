#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog_ptr;

    /* Allocate memory for the new dog */
    new_dog_ptr = malloc(sizeof(dog_t));
    if (new_dog_ptr == NULL)
        return (NULL);

    /* Allocate memory for the name */
    new_dog_ptr->name = malloc(strlen(name) + 1);
    if (new_dog_ptr->name == NULL)
    {
        free(new_dog_ptr);
        return (NULL);
    }
    strcpy(new_dog_ptr->name, name);

    /* Allocate memory for the owner */
    new_dog_ptr->owner = malloc(strlen(owner) + 1);
    if (new_dog_ptr->owner == NULL)
    {
        free(new_dog_ptr->name);
        free(new_dog_ptr);
        return (NULL);
    }
    strcpy(new_dog_ptr->owner, owner);

    /* Set the values of the new dog */
    new_dog_ptr->age = age;

    return (new_dog_ptr);
}
