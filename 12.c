/*
 * Project Euler #12 by Josh Oldenburg, 12/6/2014
 *
 * The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:
 *
 * 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
 *
 * Let us list the factors of the first seven triangle numbers:
 *
 *  1: 1
 *  3: 1,3
 *  6: 1,2,3,6
 *  10: 1,2,5,10
 *  15: 1,3,5,15
 *  21: 1,3,7,21
 *  28: 1,2,4,7,14,28
 *  We can see that 28 is the first triangle number to have over five divisors.
 *
 *  What is the value of the first triangle number to have over five hundred divisors?
 */

#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <string.h>

int numdivisors(int);

int main() {
	for (int triangle = 1, i = 1; ; triangle += ++i) {
		/* printf("Triangle: %u\n", triangle); */
		if (numdivisors(triangle) > 500) {
			printf("%u", triangle);
			return 0;
		}
	}

	return 0;
}

int numdivisors(int num) {
	int total = 3;
	int root = sqrt(num);
	for (int i = 1; i < root; i++) if (num % i == 0) total += 2;
	return total;
}
