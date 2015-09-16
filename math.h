
/* Find the greatest common denominator of numbers a and b */
unsigned long greatest_common_denominator( unsigned long a, unsigned long b);

/* Pollard's rho algorithm. n is the number to factor and x_0 is the seed of the psudo-random sequence */
unsigned long rho_algorithm(unsigned long n, unsigned long x_0);

/* The Sieve of Eratosthenes finds all prime numbers below a given bound */
unsigned long * sieve_of_eratosthenes(unsigned long bound);

/* The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. */
unsigned long triangle_number(unsigned long n);

