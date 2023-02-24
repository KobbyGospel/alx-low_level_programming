#include <stdio.h>

/**
  * main - This program print letters of alphabet
  * in upper cases
  * Return: Returns 0 for success
  */

int main(void)
{
	int n;
	int m;

	n = 'a';
	m = 'A';
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	while (m <= 'Z')
	{
		putchar(m);
		m++;
	}
	putchar(10);
	return (0);
}
