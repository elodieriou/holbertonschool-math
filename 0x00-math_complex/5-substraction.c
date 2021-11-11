#include "holberton.h"

/**
 * substraction - function that performs the substraction operation to complex numbers
 * @c1: a number
 * @c2: another number
 * @c3: a pointer to the struct complex
 * Return: Nothing
 */
void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}
