#include "holberton.h"

/**
 * division - function that performs the division operation to complex numbers
 * @c1: a number
 * @c2: another number
 * @c3: a pointer to the struct complex
 * Return: Nothing
 */
void division(complex c1, complex c2, complex *c3)
{
	c3->re = ((c1.re * c2.re) + (c1.im * c2.im)) /
                ((c2.re * c2.re) + (c2.im * c2.im));
	c3->im = ((c1.im * c2.re) - (c1.re * c2.im)) /
                ((c2.re * c2.re) + (c2.im * c2.im));
}
