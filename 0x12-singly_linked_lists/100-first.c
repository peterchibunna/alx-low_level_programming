#include "lists.h"
#include <stdio.h>
/**
 * exec - Executes before main is executed
 **/
void exec(void) __attribute__ ((constructor));
void exec(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

