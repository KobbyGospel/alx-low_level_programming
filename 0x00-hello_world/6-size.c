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

	printf("size of char: %ld bytes\n",sizeof(chartype));
	printf("size of int: %ld bytes\n",sizeof(inttype));
	printf("size of long int: %ld bytes\n",sizeof(x));
	printf("size of long long int: %ld bytes\n",sizeof(y));
	printf("size of float: %ld bytes\n",sizeof(z));
	
	return (0);
}
