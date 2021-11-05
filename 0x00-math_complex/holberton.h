#ifndef DEF_MATHCOMPLEX
#define DEF_MATHCOMPLEX

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
#endif
