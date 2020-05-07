#include <stdio.h>

#include "solutions/p001.h"
#include "solutions/p002.h"
#include "solutions/p003.h"
#include "solutions/p010.h"
#include "solutions/p013.h"

int main()
{
	printf("\nPROJECT EULER, C\nAuthor: Jared Gorski\n\n");

	/* Print solutions */
	printf("1:   %d\n", solve_p1());
	printf("2:   %lld\n", solve_p2());
	printf("3:   %lld\n", solve_p3());
	printf("10:  %lld\n", solve_p10());
	printf("13:  %lld\n", solve_p13());

	printf("\nComplete.\n\n");

	return 0;
}
