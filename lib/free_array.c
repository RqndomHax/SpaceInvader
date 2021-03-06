#include <stdlib.h>

void free_array(char **array)
{
    if (!array)
        return;
    for (int i = 0; array[i]; free(array[i++]));
    free(array);
}