#ifndef DEF_MATHCOMPLEX
#define DEF_MATHCOMPLEX
#include <stdio.h>
#include <math.h>
/**
 * struct complex - Struct of complex numbers
 *
 * @real: a real number
 * @imag: a imaginary number
 */
typedef struct complex {
	double re;
	double im;
} complex;
void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
#endif
