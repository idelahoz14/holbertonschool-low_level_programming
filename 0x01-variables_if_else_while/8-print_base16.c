#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: Program prints all base 16 characters followed by a new line
 *Return: 0 upon successful completion
 */
int main(void)
{
char num = '0';
char letter = 'a';

while (num < '10')
{
putchar(num);
num++;
}
while (letter < 'g')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
