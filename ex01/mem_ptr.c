/*
** EPITECH PROJECT, 2019
** mem_ptr.c
** File description:
** mem_ptr.c
*/

#include "./mem_ptr.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void add_str(const char *str1, const char *str2, char **res)
{
    *res = malloc(my_strlen(str1) + (my_strlen(str2)) + 1);
    my_strcpy(*res, str1);
    my_strcpy(*res, str2);
}

void add_str_struct(str_op_t *str_op)
{
    add_str(str_op->str1, str_op->str2, str_op->&res);
}

int my_strlen(char const *str)
{
    int nbr;

    while (str[nbr] != '\0')
        nbr++;
    return (nbr);
}


char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
