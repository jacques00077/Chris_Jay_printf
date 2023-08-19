#include "main.h"
/**
 * puts - to print string
 *
 * @c: string
 * Return: no of byte
 */
int putssss(char *c)
{
	int count = 0;

	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			pchar(c[count]);
		}
	}
	return (count);
}
