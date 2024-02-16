#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - cause normal process termination with a status value of 98
 *
 * @b: allocated memory 
 *
 * Return a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void i = malloc(b);
	if (i == NULL)
	{ fprintf(stderr, "Memory alloction failed/n");
		exit(98);
	}
	return ptr;
}
