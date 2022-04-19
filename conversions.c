#include "holberton.h"

/**
  * to_Binary - convert unsigned int to binary.
  * @n: number passed for convertion.
  * Return: number of base 2 characters.
  */
int to_Binary(unsigned int n)
{
	int binary[sizeof(unsigned int) * 8],
	modula, j, chars_counter = 0;
	if (n == 0)
	{
		chars_counter += _putchar('0');
		return (chars_counter);
	}
	if (n == 1)
	{
		chars_counter += _putchar('1');
		return (chars_counter);
	}
	modula = 0;
	while (n > 0)
	{
		binary[modula] = '0' + (n % 2);
		n /= 2;
		modula++;
	}
	for (j = modula - 1; j >= 0; j--)
		chars_counter += _putchar(binary[j]);
	return (chars_counter);
}

/**
  * to_Octal - changes a number to base 8
  * @num: the number to change
  * Return: number of base 8 characters.
  */
int to_Octal(unsigned int num)
{
	int chars_counter = 0, modula, octal[sizeof(unsigned int) * 8], i, j = 0;

	while (num != 0)
	{
		modula = num % 8;
		octal[j++] = '0' + modula;
		num /= 8;
	}
	for (i = j - 1; i >= 0; i--)
		chars_counter += _putchar(octal[i]);
	return (chars_counter);
}
/**
 * to_Hexa - changes a number to base 16
 * @num: the number to change
 * Return: number of base 16 characters.
 */
int to_Hexa(unsigned int num)
{
	int chars_counter = 0, modula, hexa[sizeof(unsigned int) * 8], j = 0, i;

	while (num != 0)
	{
		modula = num % 16;
		if (modula < 10)
			hexa[j++] = 48 + modula;
		else
			hexa[j++] = 55 + modula;
		num /= 16;
	}
	for (i = j - 1; i >= 0; i--)
		chars_counter += _putchar(hexa[i]);
	return (chars_counter);
}
