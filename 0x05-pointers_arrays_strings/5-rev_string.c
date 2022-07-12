#include "main.h"
/**
 * rev_string - code definition
 * @s: The string parameter
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	int len = 0;
	char s1, s2;

	for (; s[i] != '\0'; i++)
	{
		/*_putchar(s[i]);*/
		len += 1;
	}
	/*_putchar('\n');*/

	i = 0;
	for (j = len - 1; j >= 0; j--)
	{
		s1 = s[i];
		s2 = s[j];

		s[j] = s2;
		s[i] = s1;
		i += 1;
		/*_putchar(s[j]);*/
	}
	/*_putchar('\n');*/
}
