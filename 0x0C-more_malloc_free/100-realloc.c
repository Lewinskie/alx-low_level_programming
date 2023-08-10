#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _realloc - reallocates a mem block using malloc and free
 * @ptr: pointer to mem prev allocated
 * @old_size: size of ptr
 * @new_size: new size of the new mem block
 * Return:new size otherwise NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
	free(ptr);

	return (new_ptr);
}
