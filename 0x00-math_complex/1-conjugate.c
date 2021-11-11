#include "holberton.h"

/**
 * conjugate - function that returns the conjugate of a given complex number
 *
 * @c: a complex number
 *
 * Return: a conjugate of a complex number
 */
complex conjugate(complex c)
{
	c.im = -1 * c.im;
	return (c);
}
