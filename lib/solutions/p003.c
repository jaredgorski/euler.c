/*
 * PROBLEM 3
 *  
 *
 * The prime factors of 13195 are 5, 7, 13 and 29.
 *
 * What is the largest prime factor of the number 600851475143 ?
 */

#include "solutions/p003.h"
#include "util/prime/prime.h"

#define TARGET_NUM 600851475143

uint64_t solve_p3(void)
{
	uint64_t max;

	max = 0;
	for (uint64_t i = 1; (i * i) <= TARGET_NUM; i++) {
		if (TARGET_NUM % i == 0 && is_prime(i) && i > max) {
			max = i;
		}
	}

	return max;
}
