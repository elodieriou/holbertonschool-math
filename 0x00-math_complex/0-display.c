#include <stdio.h>
#include "holberton.h"

/**
 * display_complex_number - function that displays the complex numbers
 * @c: the complex numbers
 * Return: Nothing
 */
void display_complex_number(complex c)
{
	if (c.im == 0)
		printf("%g", c.re);
	else if (c.im == -1)
		printf("%g - i\n", c.re);
	else if (c.im == 1)
		printf("%g + i\n", c.re);
	else if (c.im < 0)
		printf("%g - %gi\n", c.re, (c.im) * -1);
	else
		printf("%g + %gi\n", c.re, c.im);
}
