#ifndef MAIN_H
#define MAIN_H

/* Prototype for _strcat */
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *s);
char *cap_string(char *s);
char *leet(char *s);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

/* Prototype for _putchar (provided by Holberton) */
int _putchar(char c);

#endif /* MAIN_H */
