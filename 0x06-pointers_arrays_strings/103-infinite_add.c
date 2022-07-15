#include "main.h"
/**
 * infinite_add - add two numbers.
 * @n1: first number.
 * @n2: second number.
 * @r: result.
 * @size_r: result size.
 * Return: the addition of n1 and n2.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int add = 0, n1_length, n2_length, i, j;

	for (n1_length = 0; n1[n1_length]; n1_length++)
	;
	for (n2_length = 0; n2[n2_length]; n2_length++)
	;
	if (n1_length > size_r || n2_length > size_r)
		return (0);
	n1_length--;
	n2_length--;
	size_r--;
	for (i = 0; i < size_r; i++, n1_length--, n2_length--)
	{
		if (n1_length >= 0)
			add += n1[n1_length] - '0';
		if (n2_length >= 0)
			add += n2[n2_length] - '0';
		if (n1_length < 0 && n2_length < 0 && add == 0)
			break;
		r[i] = add % 10 + '0';
		add /= 10;
	}
	r[i] = '\0';
	if (n1_length >= 0 || n2_length >= 0 || add)
		return (0);
	for (i--, j = 0; i > j; i--, j++)
	{
		add = r[i];
		r[i] = r[j];
		r[j] = add;
	}
	return (r);
}
