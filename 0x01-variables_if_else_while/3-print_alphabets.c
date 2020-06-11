#include <stdio.h>
/**                                                                                                                                                                                                        
 *main - Entry point                                                                                                                                                                                       
 *                                                                                                                                                                                                         
 *Description: This program prints all letters from a-z in lowercase and uppercase                                                                                                                                     
 *Return: Returns 0 upon successful completion                                                                                                                                                             
 */
int main(void)
{
char letter = "a";
while (letter <= "z")
{
putchar(letter);
letter++;
}
putchar("\n");

char letter = "A";
while (letter <= "Z")
{
putchar(letter);
letter++;
}
putchar("\n");

return (0);
}
