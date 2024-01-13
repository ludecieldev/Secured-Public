/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-alexandre.garbe
** File description:
** new_hastable.c
** Author:
** ludeciel
*/

#include "../../include/secured.h"

hashtable_t *ht_create(int size)
{
    hashtable_t *hashtable = malloc(sizeof(hashtable_t));

    if (size < 1)
        return NULL;
    hashtable->array = malloc(sizeof(hasharray_t *) * size);
    for (int i = 0; i < size; i++)
        hashtable->array[i] = NULL;
    hashtable->len = size;
    return hashtable;
}
