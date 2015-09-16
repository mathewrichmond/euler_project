#include "math.h"
#include "math_test.h"
#include <limits.h>
#include <stdio.h>

void print_result(char* prefix, unsigned long result)
{
	unsigned long flag = 1, ii;
	for (ii = 0; flag <= result; ii++)
	{
		if ((flag & result) != 0)
		{
			printf(prefix);
			printf("Test case %d failed\n", ii);
		}
		flag *= 2;
	}
}

unsigned long greatest_common_denominator_test() 
{
	unsigned long result = 0;

	struct args
	{
		unsigned long a;
		unsigned long b;
		unsigned long out;
	};

	struct args test_case[11] = 
	{
	    { .a = 0, .b = 0, .out = 0 },
	    { .a = 0, .b = ULONG_MAX, .out = 0 },
	    { .a = ULONG_MAX, .b = 0, .out = 0 },
	    { .a = 0, .b = 1, .out = 0 },
	    { .a = 1, .b = 0, .out = 0 },
	    { .a = ULONG_MAX, .b = 1, .out = 1 },
	    { .a = 1, .b = ULONG_MAX, .out = 1 },
	    { .a = 1, .b = 1, .out = 1 },
	    { .a = ULONG_MAX, .b = ULONG_MAX, .out = ULONG_MAX },
	    { .a = 101, .b = 103, .out = 1 },
	    { .a = 15, .b = 100, .out = 5 }
	};  

	unsigned long flag = 1, ii;

	for (ii = 0; ii < 11; ii++)
	{
		if (greatest_common_denominator(test_case[ii].a, test_case[ii].b) != test_case[ii].out)
		{
			result |= flag;
		}
		flag *= 2;
	}

	return result;
}

unsigned long rho_algorithm_test() 
{
	unsigned long result = 0;

	struct args
	{
		unsigned long n;
		unsigned long x_0;
		unsigned long out;
	};

	struct args test_case[5] = 
	{
	    { .n = 8051, .x_0 = 2, .out = 97 },
	    { .n = 8051, .x_0 = 4, .out = 83 },
	    { .n = 10403, .x_0 = 2, .out = 103 },
	    { .n = 13, .x_0 = 2, .out = 0 },
	    { .n = 13, .x_0 = 6, .out = 13 }
	};  

	unsigned long flag = 1, ii;

	for (ii = 0; ii < 5; ii++)
	{
		if (rho_algorithm(test_case[ii].n, test_case[ii].x_0) != test_case[ii].out)
		{
			result |= flag;
		}
		flag *= 2;
	}

	return result;
}

unsigned long triangle_number_test() 
{
	unsigned long result = 0;

	struct args
	{
		unsigned long n;
		unsigned long out;
	};

	struct args test_case[4] = 
	{
	    { .n = 0, .out = 0 },
	    { .n = 1, .out = 1 },
	    { .n = 2, .out = 3 },
	    { .n = 7, .out = 28 }
	};  

	unsigned long flag = 1, ii;

	for (ii = 0; ii < 4; ii++)
	{
		if (triangle_number(test_case[ii].n) != test_case[ii].out)
		{
			result |= flag;
		}
		flag *= 2;
	}

	return result;
}
