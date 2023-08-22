#include "main.h"

/**
 * Calculates the size required for type casting based on the format specifier.
 *
 * @param format Formatted string in which to print the arguments.
 * @param i List of arguments to be printed.
 * @return Size for type casting.
 */
int get_size(const char *format, int *i)
{
    int curr_i = *i + 1;
    int size = 0;

    if (format[curr_i] == 'l')
    {
        size = S_LONG;
    }
    else if (format[curr_i] == 'h')
    {
        size = S_SHORT;
    }

    if (size == 0)
    {
        *i = curr_i - 1;
    }
    else
    {
        *i = curr_i;
    }

    return size;
}
