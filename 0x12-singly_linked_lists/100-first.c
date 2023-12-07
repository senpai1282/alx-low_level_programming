#include <unistd.h>

void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - Function executed before main
 */
void myStartupFun(void)
{
    write(1, "You're beat! and yet, you must allow,\nI bore my house upon my back!\n", 66);
}


