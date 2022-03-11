#include <stdio.h>
/**
* main - Prints the alphabet.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char s_alp[26] = "abcdefghijklmnopqrstuvwxyz";
char l_alp[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i, j;
for (i = 0; i < 26; i++);
{
putchar(s_alp[i]);
}
for (j = 0; j < 26; j++)
{
putchar(l_alp[j]);
}
putchar('\n');
return (0);
}
