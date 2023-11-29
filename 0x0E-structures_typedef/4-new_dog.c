#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog_t instance
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog_t instance, NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner) {
    dog_t *new_dog_ptr = malloc(sizeof(dog_t));

    if (new_dog_ptr == NULL)
        return NULL;

    /* Allocate memory for name and owner strings */
    new_dog_ptr->name = malloc(sizeof(char) * strlen(name) + 1);
    new_dog_ptr->owner = malloc(sizeof(char) * strlen(owner) + 1);

    if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL) {
        free(new_dog_ptr->name);
        free(new_dog_ptr->owner);
        free(new_dog_ptr);
        return NULL;
    }

    /* Copy name and owner to allocated memory */
    strcpy(new_dog_ptr->name, name);
    new_dog_ptr->age = age;
    strcpy(new_dog_ptr->owner, owner);

    return new_dog_ptr;
}

