#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to search in s
 * @NULL: return NULL if character is not found
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
	s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
