#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* main - fuction which identify number is +ve,-ve or zero */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* code compare whether is pozetive, negative or zero*/
	if (n > 0)
		printf("%i is positive\n", n);
	if (n < 0)
		printf("%i is negative\n", n);
	else 
		printf("%i is zero\n", n);
	return (0);
}

