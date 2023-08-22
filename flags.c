#include "main.h"

/**
 * get_flags - Parses the format string and calculates active flags.
 * @format: Formatted string containing the argument formatting flags.
 * @i: Pointer to the current index in the format string.
 *
 * This function processes the format string to identify and calculate
 * the active flags that affect argument formatting. The active flags
 * are then represented as a combination of bitmask values.
 *
 * Return: Flags: A combination of bitmask values representing the active flags.
 */
int get_flags(const char *format, int *i)
{
    /* Flag characters and their corresponding bitmask values */
    const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
    const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

    int j, curr_i;
    int flags = 0;

    for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
    {
        /* Check each character in FLAGS_CH */
        for (j = 0; FLAGS_CH[j] != '\0'; j++)
        {
            if (format[curr_i] == FLAGS_CH[j])
            {
                /* Set the corresponding flag using the bitmask value */
                flags |= FLAGS_ARR[j];
                break;
            }
        }

        /* Stop processing if the character isn't a valid flag */
        if (FLAGS_CH[j] == '\0')
        {
            break;
        }
    }

    /* Update the current index pointer */
    *i = curr_i - 1;

    return flags;
}
