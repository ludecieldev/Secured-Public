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
    hasharray_t *array = NULL;

    for (int i = 0; i < ht->len; i++) {
        array = ht->array[i];
        mini_printf("[%d]:\n", i);
        while (array != NULL) {
            mini_printf("> %s - %s\n", array->key, array->value);
            array = array->next;
        }
    }
}
