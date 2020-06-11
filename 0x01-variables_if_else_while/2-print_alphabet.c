#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: This program prints all letters from a-z in lower case
 */
int main(void)
{
char l = "a";
for (; l <= "z"; l++)
{
putchar (l, " ");
}
return (0);
}
