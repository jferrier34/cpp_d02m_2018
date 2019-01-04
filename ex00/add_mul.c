/*
** EPITECH PROJECT, 2019
** add_mul.c
** File description:
** add_mul.c
*/

void add_mul_4param(int first, int second, int *sum, int *product)
{
    *sum = first + second;
    *product = first * second;
}

void add_mul_2params(int *first, int *second)
{
    *first = *second + *first;
    *second = (*first - *second) * *second;
}
