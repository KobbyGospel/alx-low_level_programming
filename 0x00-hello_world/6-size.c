/**
 * main - This function prints the size of the various data types
 * Return: This returns 0 for success
 */
#include <stdio.h>

int main(void)
{
	char chartype;
	int inttype;
	long int x;
	long long int y;
	float z;

	printf("size of a char: %ld byte(s)\n", sizeof(chartype));
	printf("size of an int: %ld byte(s)\n", sizeof(inttype));
	printf("size of a long int: %ld byte(s)\n", sizeof(x));
	printf("size of a long long int: %ld byte(s)\n", sizeof(y));
	printf("size of a float: %ld byte(s)\n", sizeof(z));

	return (0);
}
