/*
** EPITECH PROJECT, 2019
** div.c
** File description:
** div.c
*/

#include "castmania.h"

int integer_div(int a, int b)
{
    if (b == 0)
        return (0);
        return (a / b);
}

float decimale_div(int a, int b)
{
    if (b == 0)
        return (0);
        return (a / b);
}

void exec_div(division_t *operation)
{
    decimale_op_t *dec;
    integer_op_t *inte;

    if (operation->div_type == INTEGER) {
        inte = (integer_op_t *)operation->div_op;
        inte->res = integer_div(inte->a, inte->b);
    }
    if (operation->div_type == DECIMALE) {
        dec = (decimale_op_t *)operation->div_op;
        dec->res = integer_div(dec->a, dec->b);
   }
}
