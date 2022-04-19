#include "../holberton.h"
#include <limits.h>
#include <stdio.h>


int main(void)
{
	char a = 'a';
	char *b = NULL;
	long int c = INT_MAX, l = UINT_MAX + 1024;
	int count0, count1;
	unsigned int ui = (unsigned int)INT_MAX + 1024;

	count0 = _printf("simple statement\n");
	count1 = _printf("simple statement\n");
	printf("count [%d, %d]\n", count0, count1);

	count0 = _printf("%c\n", a);
	count1 = printf("%c\n", a);
	printf("count [%d, %d]\n", count0, count1);

	count0 = _printf("%s\n", b);
	count1 = printf("%s\n", b);
	printf("count [%d, %d]\n", count0, count1);

	count0 = _printf("%d\n", c);
	count1 = printf("%d\n", c);
	printf("count [%d, %d]\n", count0, count1);

	count0 = _printf("%%\n");
	count1 = printf("%%\n");
	printf("count [%d, %d]\n", count0, count1);
	_printf("%b\n", UINT_MAX);
	_printf("%b\n", l);
	_printf("Unsigned: [%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
}
