#include <stdio.h>
/**
 * main - main function
 * Return: always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;

	float e;

	printf("Size of a char: %lu  byte(s)\n", sizeof(char a));
	printf("Size of an int: %lu  byte(s)\n", sizeof(int b));
	printf("Size of a long int: %lu  byte(s)\n", sizeof(long int c));
	printf("Size of a long long int: %lu  byte(s)\n", sizeof(long long int d));
	printf("Size of a float: %lu  byte(s)\n", sizeof(float e));
	return (0);
}
