#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

/* Provided by Holberton */
int _putchar(char c);

/* Task 0 */
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */
