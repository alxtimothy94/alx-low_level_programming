#include "main.h"
/**
 * main -entry level to my program.
 *
 * print alphabet.
 *
 * Return: always 0
 */

void print_alphabet(void);
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
