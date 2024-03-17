#include <stdlib.h>  // for malloc, free
#include <string.h>  // for strlen

char *_strdup(char *str) {
    // Check if str is NULL
    if (str == NULL) {
        return NULL;
    }

    // Allocate memory for the duplicated string
    char *duplicate = (char *)malloc(strlen(str) + 1);  // +1 for the null terminator

    // Check if memory allocation was successful
    if (duplicate == NULL) {
        return NULL;  // Insufficient memory available
    }

    // Copy the string
    strcpy(duplicate, str);

    // Return a pointer to the duplicated string
    return duplicate;
}
