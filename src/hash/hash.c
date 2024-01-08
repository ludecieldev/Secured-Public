/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-alexandre.garbe
** File description:
** hash.c
** Author:
** ludeciel
*/

#include "../../include/secured.h"

int hash(char *key, int len)
{
    long long int hash = get_ascii_value(key);

    hash *= hash;
    while (int_count(hash) < 7)
        hash *= 3;
    while (int_count(hash) > 7)
        hash /= 10;
    return ((int)hash);
}
