#include <stdio.h>

#include "solutions/p001.h"
#include "solutions/p002.h"
#include "solutions/p010.h"

int main()
{
	printf("\nPROJECT EULER\nLang: C\nAuthor: Jared Gorski\n\n");

	/* Print solutions */
	printf("1: %ld\n", solve_p1());
	printf("2: %ld\n", solve_p2());
	printf("10: %ld\n", solve_p10());

	printf("\nFinished.\n\n");

	return 0;
}
