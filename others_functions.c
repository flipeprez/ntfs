#include "prototype_libshel.h"
/**
 * free2 - free double pointer.
 * @need_free: need to free.
 * Return:nothing.
 */
void free2(char **need_free)
{
	int index;

	for (index = 0; free2[index] != NULL; index++)
		free(free2[index]);
	free(free2);
}
