/**
 * main - This program displays a text to the stdout
 * Retun: THe function returns 1 for success
 */
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 50);
	return (1);
}
