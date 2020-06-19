#include <stdio.h>
/**
 *main - entry point
 *
 *Description: This program will print the numbers between 1 and 100
 *followed by a new line. For multiples of 3, the program will print
 *Fizz instead of the number. For multiples of 5, it will print Buzz.
 *If the numbers are multiples of both, it prints FizzBuzz.
 *Return: 0 upon successful completion
 */
int main(void)
{
int number;

for (number = 1; number <= 100; number++)
{
if ((number % 3 == 0) && (number % 5 != 0))
{
printf("Fizz");
}
else if (number % 5 == 0)
{
printf("Buzz");
}
else if (number % 3 == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", number);
}
if (number != 100)
{
printf(' ');
}
}
printf("\n");
return (0);
}
