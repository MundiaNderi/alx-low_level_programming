#include <stdio.h>

/**
<<<<<<< HEAD
 * main - prints the alphabets in lowercase
 * followed by a new line. except q and e
=======
 * main -prints alphabets in lowercase
 * followed by a new line, except q and e
>>>>>>> 63559caf7b19e9b76b2d0f5a72935e6415932582
 * Return: 0
*/
int main(void)
{
char la;
<<<<<<< HEAD
for (la = 'a'; la <= 'z' la++)
{
if (la != 'e' && la != 'q')
putchar(la);

=======
for ('la' = 'a'; la <= 'z'; la++)
{
if 'la' != 'e' && la != 'q')
putchar(la);
}

putchar('\n');
>>>>>>> 63559caf7b19e9b76b2d0f5a72935e6415932582
return (0);
}
