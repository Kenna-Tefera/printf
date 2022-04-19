#include "holberton.h"


/**
 * _print_str - prints a string
 * @string: string to be printed
 * Return: length of printed characters
 */

int _print_str(char *string)
{
	int count = 0;

	if (string != NULL)
		while (*string)
		{
			_putchar(*string++);
			count += 1;
		}
	else
		return (_print_str("(null)"));
	return (count);
}

/**
 * _print_int - prints an integer
 * @var: variable to be printed
 * Return: length of printed characters
 */

int _print_int(long int var)
{
	int count = 0;

	if (var < 0)
	{
		_putchar('-');
		count += 1;
		var = -var;
	}

	if (var / 10)
		count += _print_int(var / 10);

	_putchar(var % 10 + '0');
	count += 1;

	return (count);
}
