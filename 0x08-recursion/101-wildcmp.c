#include "main.h"
/**
 * wildcmp - test if 2 strings can be considered identical
 * @s1: string one.
 * @s2: string two.
 * Return: 1 if True, 0 if False
 */

int wildcmp(char *s1, char *s2)
{
	if (!(*s1))
	{
		if (!(*s2))
		{
			return (1);
		}
		if (*s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		return ((wildcmp(s1 + 1, s2)) || (wildcmp(s1, s2 + 1)));
	}
	return (0);
}
