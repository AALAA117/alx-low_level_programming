#ifndef MAIN_H
#define MAIN_H
#define BUFF_SIZE 1024
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
#endif
