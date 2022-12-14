#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * Return: Nothing
 * @str: String
 */

void puts_half(char *str)
{
	int i;
	int l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
		if ((l % 2) != 0)
		{
			l++;

			for (i = (l / 2); (i <= l && (i % 2) != 0) || ((i % 2) == 0); i++)
			{
				if (str[i] != '\0')
				{
					_putchar(str[i]);
				}
			}
		}
		else if ((l % 2) == 0)
		{
			int i = ((l - 1) / 2);

			for (i = (l / 2); (i <= l && (i % 2) != 0) || ((i % 2) == 0); i++)
			{
				if (str[i] != '\0')
				{
					_putchar(str[i]);
				}
			}
		}
	_putchar(10);
}
