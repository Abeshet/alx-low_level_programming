#include<stdio.h>
/**
 * main - fuction which print different combination of two digit number
 *
 *  Return: Always 0 (Success)
 */
	int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

