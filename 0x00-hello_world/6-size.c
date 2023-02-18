#include <stdio.h>

/**
 * main - size of data type
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	char z;
	int y;
	long int w;
	long long int v;
	float x;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(w));
printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(v));
printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(x));
return (0);
}
