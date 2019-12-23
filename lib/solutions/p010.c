/*
 * PROBLEM 10
 *
 *
 * The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 *
 * Find the sum of all the primes below two million.
 */

#include <math.h>

#include "solutions/p010.h"
#include "util/prime/prime.h"

#define TARGET_NUM 2000000

uint64_t solve_p10(void)
{
  uint64_t x = TARGET_NUM;
  uint64_t sum = 0;

  // loop until limit
  for (int i = 2; i < x; i++) {
    int x = is_prime(i);
    if (x != 0) {
      // if number is prime, add to sum
      sum += i;
    }
  }

  return sum;
}
