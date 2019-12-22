/*
 * PROBLEM 10
 *
 *
 * The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 *
 * Find the sum of all the primes below two million.
 */

#include <math.h>

#include "util/prime/prime.h"

long solve_p10(void)
{
  long x = 2000000;
  long sum = 0;

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
