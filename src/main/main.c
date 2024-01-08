/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-alexandre.garbe
** File description:
** main.c
** Author:
** ludeciel
*/

#include "../../include/secured.h"

char* generateRandomString(int length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char *randomString = malloc(length + 1);

    for (int i = 0; i < length; i++) {
        int index = rand() % (int)(sizeof(charset) - 1);
        randomString[i] = charset[index];
    }

    randomString[length] = '\0';
    return randomString;
}

int main(void) {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    int g = 0;
    int h = 0;
    int z = 0;
    int j = 0;

    for (int i = 0; i < 1000; i++) {
        char *randomString = generateRandomString(rand() % 10 + 1);
        printf("%s:%d index :%d\n", randomString, hash(randomString, 5), hash(randomString, 5) % 10);
        a += hash(randomString, 5) % 10 == 0 ? 1 : 0;
        b += hash(randomString, 5) % 10 == 1 ? 1 : 0;
        c += hash(randomString, 5) % 10 == 2 ? 1 : 0;
        d += hash(randomString, 5) % 10 == 3 ? 1 : 0;
        e += hash(randomString, 5) % 10 == 4 ? 1 : 0;
        f += hash(randomString, 5) % 10 == 5 ? 1 : 0;
        g += hash(randomString, 5) % 10 == 6 ? 1 : 0;
        h += hash(randomString, 5) % 10 == 7 ? 1 : 0;
        z += hash(randomString, 5) % 10 == 8 ? 1 : 0;
        j += hash(randomString, 5) % 10 == 9 ? 1 : 0;
        free(randomString);
    }
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %d\n",c);
    printf("d = %d\n",d);
    printf("e = %d\n",e);
    printf("f = %d\n",f);
    printf("g = %d\n",g);
    printf("h = %d\n",h);
    printf("z = %d\n",z);
    printf("j = %d\n",j);
    return 0;
}
