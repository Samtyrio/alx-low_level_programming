#include "main.h"

/**
 * _puts_recursion - this function prints a recursion
 * @s: pointer to the string
 * Return: whatever is needed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
