#include "main.h"

/**
 * *rot13 - encoding a string using rot13.
 * @s: the string to be encoded to rot13.
 * Return: the string s encoded to rot13.
 */

char *rot13(char *s)
{
	int i = 0, j = 0;
	char string_input[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char string_output[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	while (s[i] != '\0')
	{
		while (string_input[j] != '\0')
		{
			if (s[i] == string_input[j])
			{
				s[i] = string_output[j];
				break;
			}
			j++;
		}

		j = 0;
		i++;
	}

	return (s);
}
