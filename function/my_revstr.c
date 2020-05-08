
/*
** EPITECH PROJECT, 2017
** my_revstr.c
** File description:
** revstr
*/

#include <stdlib.h>

char *my_revstr(char *str)
{
	int i = 0;
	int j = 0;
	int *dest = 0;

	while (str[i] != '\0')
		i += 1;

	dest = malloc(sizeof(char) * (i + 1 + 1));

	while (str[i] > str[0]) {
		dest[j] = str[i];
		i -= 1;
		j += 1;
	}
	return (0);
}
