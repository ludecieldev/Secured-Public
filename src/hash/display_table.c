/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-alexandre.garbe
** File description:
** new_hashtable.c
** Author:
** julienmarss
*/

#include "../../include/secured.h"

void ht_dump(hashtable_t *ht)
{
    for (int i = 0; i < ht->len; i++) {
        if (ht->array[i])
            mini_printf("[%d]: ", i);
    }
}
