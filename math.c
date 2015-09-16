#include "math.h"
#include <stdio.h>

unsigned long greatest_common_denominator( unsigned long a, unsigned long b) 
{
	unsigned long r;
	if (a == 0 || b == 0)
	{
		return 0;
	}
	while (b != 0) 
	{
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

unsigned long rho_algorithm(unsigned long n, unsigned long x_0) 
{

	unsigned long cycle_size = 2, factor = 1, ii, x;

	// x is the index ouf out psudo-random sequence. we start at the seed index
	x = x_0;

	while (factor == 1) 
	{
		// cycle detection
		for (ii=1; ii <= cycle_size && factor <= 1; ii++) 
		{
			// polynomial (mod n) psudo-random sequence generator
			x = (x*x+1)%n;
			factor = greatest_common_denominator(x - x_0, n);
		}

		cycle_size *= 2;
		x_0 = x;
	}
	return factor;
}

unsigned long * sieve_of_eratosthenes(unsigned long bound)
{
	
}

unsigned long triangle_number(unsigned long n)
{
	unsigned long tri = 0, ii;
	for (ii = 1; ii <= n; ii++)
	{
		tri += ii;
	}
	return tri;
}
