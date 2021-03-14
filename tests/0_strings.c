#include "../holberton.h"
#include <stdio.h>

/**
 * Command to run test:
 * gcc ./tests/0_strings.c _printf.c handle_print.c funciones.c utils.c 
 */
int main(void)
{
	_printf("Hello Holberton\n");
	printf("Hello Holberton\n");

	_printf("Hello %s School...\n", "Holberton");
	printf("Hello %s School...\n", "Holberton");

	_printf("Hello %c %c %c %c %c\n", 'H', 'l', 'b', 't', 'n');
	printf("Hello %c %c %c %c %c\n", 'H', 'l', 'b', 't', 'n');

	_printf("Hello %%\n");
	printf("Hello %%\n");
}