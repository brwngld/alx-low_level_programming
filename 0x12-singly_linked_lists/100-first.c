#include <stdio.h>

/**
 * beforeMainFunc - Applies the constructor attribute to beforeMainFunc()
 * so that it's executed before main()
 *
*/

void beforeMainFunc(void) __attribute__ ((constructor));

/**
 * beforeMainFunc - Implementation
 *
 */

void beforeMainFunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
