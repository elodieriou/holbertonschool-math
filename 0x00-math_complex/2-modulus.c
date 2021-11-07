#include <math.h>
#include "holberton.h"

/**
 * modulus - function that returns the modulus of a given complex number
 *
 * @c: a complex number
 * @modu: modulus of a complex number
 *
 * Return: the modulus of a complex number
 */
double modulus(complex c)
{
	double mult;
	mult = sqrt(c.re * c.re + c.im * c.im);
	return (mult);
}
