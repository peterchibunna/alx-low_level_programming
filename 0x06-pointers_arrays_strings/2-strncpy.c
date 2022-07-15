#include "main.h"
/**
 * *_strncpy - function description
 * @dest: destination parameter
 * @src: source parameter
 * @n: number of chars from src
 * Return: pointer to the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (; src[i] != '\0'; i++)
	{
	} /* get the length of the source */

	for (; src[j] != '\0'; j++)
	{
		if (n > j)
		{
			dest[j] = src[j];
			/*i++;*/
		}
	}

	dest[j] = '\0';

	return (dest);
}
