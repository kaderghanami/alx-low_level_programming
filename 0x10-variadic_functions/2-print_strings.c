#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings (can be NULL).
 * @n: The number of strings passed to the function.
 * @...: The strings to be printed.
 *
 * Description: This function takes a variable number of string arguments
 * and prints them separated by the specified separator. If separator is NULL,
 * it won't be printed. If one of the strings is NULL, "(nil)" will be printed
 * instead. A new line is printed at the end of the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
