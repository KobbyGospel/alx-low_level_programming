#include <stdio.h>
#include <unistd.h>
/**
 * main - This program prints a text line to the stdout
 * Return: The program returns 1 for success
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
