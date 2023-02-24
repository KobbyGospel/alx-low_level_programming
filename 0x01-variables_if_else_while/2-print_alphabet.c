#include <stdio.h>

/**
  * main - This program print letters of alphabet
  * in lower cases
  * Return: Returns 0 for success
  */

int main(void)
{
	int n;

	n = 'a';
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}
