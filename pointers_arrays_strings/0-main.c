#include "main.h"

/**
 * _puts - prints a string followed by a new line using _putchar
 * @str: string to print
 */
void _puts(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
    _putchar('\n');
}

/**
 * main - test _strcat function
 *
 * Return: 0
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!";
    char *ptr;

    _puts(s1);
    _puts(s2);

    ptr = _strcat(s1, s2);

    _puts(s1);
    _puts(s2);
    _puts(ptr);

    return (0);
}
