/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-alexandre.garbe
** File description:
** ht_delete.c
** Author:
** ludeciel
*/

#include "../../include/secured.h"


int ht_delete(hashtable_t *ht, char *key)
{
    int hashkey = ht->hash(key, ht->len);
    int index = hashkey % ht->len;
    hasharray_t *array = ht->array[index];
    hasharray_t *next = NULL;

    if (array == NULL)
        return 84;
    if (my_strcmp(array->key, key) == 0) {
        ht->array[index] = array->next;
        free(array->key);
        free(array->value);
        free(array);
        return 0;
    }
    while (array->next != NULL) {
        if (my_strcmp(array->next->key, key) == 0) {
            next = array->next->next;
            free(array->next->key);
            free(array->next->value);
            free(array->next);
            array->next = next;
            return 0;
        }
        array = array->next;
    }
    return 84;
}