#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything based on the provided format
 * @format: list of types of arguments passed to the function\
 *
 */

void print_all(const char * const format, ...)
	{
		va_list args;
		unsigned int i = 0;
		char *str;
		char c;
		int num;
		float f;

		va_start(args, format);

		while (format && format[i])
			{
				switch (format[i])
					{
						case 'c':
							c = va_arg(args, int);
							printf("%c", c);
							break;
						case 'i':
							num = va_arg(args, int);
							printf("%d", num);
							break;
						case 'f':
							f = va_arg(args, double);
							printf("%f", f);
							break;
						case 's':
							str = va_arg(args, char *);
							if (str == NULL)
								printf("(nil)");
							else
								printf("%s", str);
							break;
					}
				if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
							format[i] == 's') && format[i + 1] != '\0')
					printf(", ");

				i++;
			}

		printf("\n");
		va_end(args);
	}

