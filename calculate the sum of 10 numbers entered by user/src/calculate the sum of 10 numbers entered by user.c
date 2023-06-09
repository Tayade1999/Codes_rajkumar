/*
 ============================================================================
 Name        : calculate.c
 Author      : Rajkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>


int main() {

	// WAP to calculate the sum of 10 numbers entered by user.
	// If user enters a negative number then terminate the loop.

	int i;
	double number, sum = 0;

	for (i = 1; i <= 10; i++) {
		printf("Enter number %d: ", i);
		scanf("%lf", &number);

		if (number < 0)
			break;

		sum += number;
	}

	printf("Sum = %.2lf", sum);

	return 0;
}
