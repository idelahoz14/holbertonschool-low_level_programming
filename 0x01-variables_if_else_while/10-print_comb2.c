#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: Function will print the numbers from 00 to 99
 *Return: 0 upon successful completion
 */
int main(void)
{
int num = '0';
int num2 = '10';
while (num <= '9')
{
putchar('0' + num);
}
while (num2 <= 99)
{
putchar(num2);
if (num2 != 99)
{
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
