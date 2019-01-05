/*
** EPITECH PROJECT, 2019
** funct_ptr.c
** File description:
** funct_ptr.c
*/

#include "func_ptr.h"
#include <string.h>


void print_normal(const char *str)
{
    printf("%s\n", str);
}

void print_reverse(const char *str)
{
    int i = strlen(str);

    if (str == NULL) {
        return ;
    }
    for (; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

void print_upper(const char *str)
{
    int i = 0;

    if (str == NULL) {
        return ;
    }
    for (; str && str[i]; i++) {
        if (str[i] <= 'z' && str[i] >= 'a') {
            printf("%c", str[i] - 32);
        }
        else
            printf("%c", str[i]);
    }
    printf("\n");
}

void print_42(const char *str)
{
    printf("42\n");
}

void do_action(action_t action, const char *str)
{
    void (*f[])(const char *) = {
        print_normal,
        print_reverse,
        print_upper,
        print_42
    };
    f[action](str);
}
