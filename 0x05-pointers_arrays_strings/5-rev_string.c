#include "main.h"
/**
 * rev_string - code definition
 * @s: The string parameter
 */
void rev_string(char *s)
{
	int len, i, j;
	char s1, s2;

	for (len = 0; s[len] != '\0'; len++)
	{
		/*_putchar(s[i]);*/
		/*len += 1;*/
	}
	/*_putchar('\n');*/

	j = len - 1;
	i = 0;

	while (j > i)
	{
		s1 = s[i];
		s2 = s[j];

		s[j] = s2;
		s[i] = s1;
		j--;
		i++;
		/*_putchar(s[j]);*/
	}
	/*_putchar('\n');*/
}
