#include "lists.h"

void __attribute__((constructor)) begin(void);
/**
 * begin - Printfs a string before mainfunction
 *
 */

void begin(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!");
}
