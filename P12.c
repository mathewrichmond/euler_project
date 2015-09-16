#include "math.h"
#include "math_test.h"
#include <stdio.h>

int main() 
{
	unsigned int test_result;

	// test the functions being used
	test_result = greatest_common_denominator_test();
	print_result("greatest_common_denominator_test: ",test_result);
	test_result = triangle_number_test();
	print_result("triangle_number_test: ",test_result);
	test_result = rho_algorithm_test();
	print_result("rho_algorithm_test: ",test_result);
}

unsigned long P12()
{
	return 0;
}