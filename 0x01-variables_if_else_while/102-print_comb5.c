#include <stdio.h>
/**
 * main - Description bla bla blah
 *
 * Return: Always 0.
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++)  /*first group should end at 98 */
	{
		for (num2 = num1 + 1; num2 <= 99; num2++) /* send group should end at 99 */
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 98 && num2 == 99) /* terminate the groups accordingly */
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
