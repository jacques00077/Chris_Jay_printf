#include "main.h"

/**
 * get_size - Determines the size modifier for a formatted argument.
 *
 * This function parses the format string to check for size modifiers
 * associated with the argument format. It checks for 'l' to set the
 * size to S_LONG and 'h' to set the size to S_SHORT.
 *
 * @format: Formatted string containing the argument specification.
 * @i: Pointer to the current index in the format string.
 *
 * Returns: The size modifier for the argument.
 */
int get_size(const char *format, int *i)
{
	int curr_i = *i + 1;
	int size = 0;

	if (format[curr_i] == 'l')
		size = S_LONG;
	else if (format[curr_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;

	return (size);
}

