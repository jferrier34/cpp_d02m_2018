/*
** EPITECH PROJECT, 2019
** div.c
** File description:
** div.c
*/

#include <stdio.h>
#include "castmania.h"

int integer_div(int a, int b)
{
    int res = 0;
    if (b == 0)
        return (0);
    res = a / b;
    return (res);
}

float decimale_div(int a, int b)
{
    float result = 0;

    if (b != 0) {
        result = (float)a / (float)b;
        return (result);
    }
    return (0);
}

void exec_div(division_t *operation)
{
    decimale_op_t *dec;
    integer_op_t *inte;

    if (operation->div_type == INTEGER) {
        inte = ((integer_op_t *)operation->div_op);
        inte->res = integer_div(inte->a, inte->b);
    }
    if (operation->div_type == DECIMALE) {
        dec = ((decimale_op_t *)operation->div_op);
        dec->res = decimale_div(dec->a, dec->b);
   }
}

