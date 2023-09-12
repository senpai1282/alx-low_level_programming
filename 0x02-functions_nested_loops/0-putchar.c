#include <unistd.h>

int main(void)
{
    char str[] = "_putchar\n";
    write(1, str, sizeof(str) - 1);
    return (0);
}}
