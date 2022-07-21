#include "main.h"
/**
 * _strlen - length of s.
 * @s: string.
 * @i: counter.
 * Return: int.
 */
int _strlen(char *s, int i)
{
	if (s[i] != '\0')
	{
		i++;
		return (_strlen(s, i));
	}
	return (i);
}
/**
 * palindrome_tester - test string's palindrome-ness.
 * @s: string.
 * @st: number of the first char of s.
 * @end: number of the last char of s.
 * Return: int.
 */
int palindrome_tester(char *s, int st, int end)
{
	if (st == end)
	{
		return (1);
	}
	if (s[st] != s[end])
	{
		return (0);
	}
	if (st < end + 1)
	{
		return (palindrome_tester(s, st + 1, end - 1));
	}
	return (1);
}
/**
 * is_palindrome - function to check if a string is palindrome.
 * @s: string.
 * Return: 1 if true & 0 if false.
 */
int is_palindrome(char *s)
{
	int n = _strlen(s, 0);

	if (n == 0)
		return (1);
	return (palindrome_tester(s, 0, n - 1));
}
