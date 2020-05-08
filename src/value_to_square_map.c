/*
** EPITECH PROJECT, 2018
** value
** File description:
** square_map
*/

#include "my.h"

int value_to_square_map(char *map, int *square_map, int ign, int i)
{
	switch(map[ign + i]) {
	case '.':
		square_map[i] = 1;
		break;
	case 'o':
		square_map[i] = 0;
		break;
	case '\n':
		square_map[i] = -1;
		break;
	}
	return (square_map[i]);
}
