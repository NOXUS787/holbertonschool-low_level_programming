# C - File I/O

This project focuses on low-level file operations in C using POSIX system calls.
You will learn how to open, read, write, close, and create files without using
standard C library functions like `printf`, `puts`, `fopen`, or `fprintf`.

## Learning Objectives

By the end of this project, you should be able to explain:

### General
- What a file descriptor is
- The 3 standard file descriptors and their POSIX names:
  - `STDIN_FILENO`  (0) – standard input
  - `STDOUT_FILENO` (1) – standard output
  - `STDERR_FILENO` (2) – standard error
- How to use the system calls:
  - `open`
  - `read`
  - `write`
  - `close`
- How to:
  - Create files
  - Read from files
  - Write to files
  - Append text to files
- What the flags `O_RDONLY`, `O_WRONLY`, `O_RDWR`, `O_CREAT`, `O_TRUNC`, `O_APPEND` mean
- What file permissions are and how to set them using `open`
- What a system call is
- The difference between a function and a system call
- How to read documentation using `man` pages

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compilation: