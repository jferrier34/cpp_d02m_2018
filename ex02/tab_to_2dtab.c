/*
** EPITECH PROJECT, 2019
** tab_to_2dtab.c
** File description:
** tab_to_2dtab.c
*/

#include <stdlib.h>
#include <stdio.h>

void tab_to_2dtab(const int *tab, int length, int width, int ***res)
{
    int i = 0;

    *res = malloc(sizeof(int *) * length);
    int **r = *res;
    for (; i < length; i++) {
        r[i] = malloc(width * sizeof(int) + 1);
        for (int j = 0; j < width; j++) {
            r[i][j] = *tab;
            tab++;
        }
    }
}
