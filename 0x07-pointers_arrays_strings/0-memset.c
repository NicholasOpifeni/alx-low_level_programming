#include "main.h"

/**
 * _memset -> This is a memory set function
 * @s: String
 * @b: Character
 * @n: An integer
 * Return: A string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
