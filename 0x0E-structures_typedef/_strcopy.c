/**
 * _strcopy - Copies a string from `@src` to `@dest` to by dest.
 * @dest: The buffer holding the copy
 * @src: The source string
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
