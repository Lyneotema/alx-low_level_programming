#include <stdio.h>
/**
 * main - prints number of argeuments
 * @argc: arguement count
 * @argv: arguement vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
