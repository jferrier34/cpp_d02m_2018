/*
** EPITECH PROJECT, 2019
** castmania.c
** File description:
** castmania.c
*/

#include <stdio.h>
#include "castmania.h"

void exec_operation(instruction_type_t instruction_type , void *data)
{
    if (instruction_type == ADD_OPERATION) {
        exec_add(((instruction_t *)data)->operation);
    }
    if (instruction_type == DIV_OPERATION) {
        exec_div(((instruction_t *)data)->operation);
    }
}

void exec_instruction(instruction_type_t instruction_type , void *data)
{
    if (instruction_type == PRINT_INT) {
        printf("%d\n", (int) *((int *) data));
    }
    else if (instruction_type == PRINT_FLOAT) {
        printf("%f\n", (float) *((float *) data));
    }
    else
        exec_operation(instruction_type, data);
}
