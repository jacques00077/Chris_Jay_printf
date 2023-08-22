#include "main.h"

/**
 * determine_size - Determines the size based on format specifier
 * @format: Format string containing the specifier
 * @index: Index of the current character in the format string
 *
 * Returns: Size identifier corresponding to the specifier.
 */
int determine_size(const char *format, int *index) {
    int current_index = *index + 1;
    int size_identifier = 0;

    if (format[current_index] == 'l') {
        size_identifier = S_LONG;
    } else if (format[current_index] == 'h') {
        size_identifier = S_SHORT;
    }

    if (size_identifier == 0) {
        *index = current_index - 1;
    } else {
        *index = current_index;
    }

    return size_identifier;
}
