#include "main.h"
/**
 * two integers
 * swap values 
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
