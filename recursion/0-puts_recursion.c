#include "main.h"

/**
 * _puts_recursion - Similar to puts
 * @s: Pointer to the string
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar(10);
}