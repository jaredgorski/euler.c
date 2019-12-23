/*
 * PROBLEM 1
 *
 *
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */

#include "solutions/p001.h"

#define TARGET_NUM 1000

uint32_t solve_p1(void)
{
	uint32_t sum = 0;

	for (uint32_t i = 1; i < TARGET_NUM; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}

	return sum;
}
