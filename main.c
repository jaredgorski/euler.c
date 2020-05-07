#include <stdio.h>
#include <time.h>

#include "solutions/p001.h"
#include "solutions/p002.h"
#include "solutions/p003.h"
#include "solutions/p010.h"
#include "solutions/p013.h"

int main()
{
	printf("\nPROJECT EULER, C\nAuthor: Jared Gorski\n\n");

	/* Start global timer */
	clock_t begin = clock();

	/* Print solutions */
	clock_t b1 = clock();
	uint32_t p1 = solve_p1();
	clock_t e1 = clock();
	printf("%-7s%-20d in %-5f seconds.\n", "1:", p1, (double)(e1 - b1) / CLOCKS_PER_SEC);

	clock_t b2 = clock();
	uint64_t p2 = solve_p2();
	clock_t e2 = clock();
	printf("%-7s%-20lld in %-5f seconds.\n", "2:", p2, (double)(e2 - b2) / CLOCKS_PER_SEC);

	clock_t b3 = clock();
	uint64_t p3 = solve_p3();
	clock_t e3 = clock();
	printf("%-7s%-20lld in %-5f seconds.\n", "3:", p3, (double)(e3 - b3) / CLOCKS_PER_SEC);

	clock_t b10 = clock();
	uint64_t p10 = solve_p10();
	clock_t e10 = clock();
	printf("%-7s%-20lld in %-5f seconds.\n", "10:", p10, (double)(e10 - b10) / CLOCKS_PER_SEC);

	clock_t b13 = clock();
	uint64_t p13 = solve_p13();
	clock_t e13 = clock();
	printf("%-7s%-20lld in %-5f seconds.\n", "13:", p13, (double)(e13 - b13) / CLOCKS_PER_SEC);

	/* End global timer */
	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

	printf("\nCompleted in %f seconds.\n\n", time_spent);

	return 0;
}
