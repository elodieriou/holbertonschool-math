#include <stdio.h>
#include "holberton.h"

/**
 * display_complex_number - function that displays the complex numbers
 *
 * @c: the complex numbers
 *
 * Return: Nothing
 */
void display_complex_number(complex c)
{
	if (c.re != 0 && c.im)
		printf("%.0f + %.0fi\n", c.re, c.im);
	else if (c.re == 0)
		printf("%.0fi\n", c.im);
	else
		printf("%.0f\n", c.re);
}
