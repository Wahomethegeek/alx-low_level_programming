#include <stdio.h>

/**
 * tortoise - prints a string before the main function is executed.
 */
void __attribute__((constructor)) tortoise(void);
void tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
