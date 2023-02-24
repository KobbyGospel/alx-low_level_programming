#include <stdio.h>
/**
  * main - This program prints all possible combination of single
  * digit numbers
  *Return: The return is 0 for success
  */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			/* ascii value for comma(,) */
			putchar(44);
			/* ascii value for space 32 */
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
