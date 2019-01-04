/*
** EPITECH PROJECT, 2019
** mem_ptr.h
** File description:
** mem_ptr.h
*/

#ifndef MEM_PTR_H
#define MEM_PTR_H

#include <unistd.h>
#include <stdio.h>
#include <unistd.h>

typedef struct str_op {
    char *res;
    char *str1;
    char *str2;
} str_op_t;

void add_str(const char *str1, const char *str2, char **res);
void add_str_struct(str_op_t *str_op);
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);

#endif

