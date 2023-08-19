#include "main.h"
/**
 * pchar - to print character
 * @c: char input
 * Return: 1
 */
int pchar(char c)
{
	return (write(1, &c, 1));
}
