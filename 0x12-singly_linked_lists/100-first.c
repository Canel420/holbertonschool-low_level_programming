#include <stdio.h>

void __attribute__((constructor)) begin(void);
/**
 * begin - Printfs a string before mainfunction
 *
 */

void begin(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
