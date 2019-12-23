/*
 * PROBLEM 2
 *  
 *
 * Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
 *
 *		1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 *
 * By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
 */

#include "solutions/p002.h"

#define TARGET_NUM 4000000

uint64_t solve_p2(void)
{
  uint64_t a, b, c, x, sum;

  a = 0;
  b = 1;
  x = TARGET_NUM;
  sum = 0;

  while (b < x) {
    c = a + b;
    a = b;
    b = c;

    if (b % 2 == 0) {
      sum += b;
    }
  }
  
  return sum;
}
