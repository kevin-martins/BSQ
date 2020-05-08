/*
** EPITECH PROJECT, 2018
** print
** File description:
** print
*/

#include "my.h"

void print_charmap(char *map, int map_size, int ign)
{
	for (; ign != map_size; ign++)
		my_putchar(map[ign]);
}
