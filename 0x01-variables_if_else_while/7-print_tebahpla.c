#include<stdio.h>
/**
 * main - fuction which print alphabet in reverse order
 *
 * Return: Always 0 (Success)
 */
	int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}

