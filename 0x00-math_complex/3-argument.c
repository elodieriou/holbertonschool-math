#include <math.h>
#include "holberton.h"

/**
 * argument - function that returns the argument of a given complex number
 *
 * @c: a complex number
 *
 * Return: the argument of a complex number
 */
double argument(complex c)
{
	double args;

	args = atan(c.im / c.re);
	return (args);
}
