#include <stdio.h>
/**
  * main - This program prints the letters of the alphabet
  * in reverse(z-a)
  * Return: This return is 0 for success
  */

int main(void)
{
	int n;

	n = 'z';
	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar(10);
	return (0);
}
