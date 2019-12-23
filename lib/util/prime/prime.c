/*
 * Library for functions involving prime numbers.
 */

#include "util/prime/prime.h"

uint8_t is_prime(uint64_t n)
{
  // check for quick primes
  if (n == 2 || n == 3 || n == 5) {
    return 1;
  }

  if (n % 2 == 0) {
    return 0;
  } else { // check factors up to and including square root of n
    for (int i = 2; (i * i) <= n; i++) {
      if (n % i == 0) {
        return 0;
      }
    }

    return 1;
  }
}
