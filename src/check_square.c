/*
** EPITECH PROJECT, 2018
** check_square
** File description:
** square
*/

#include "my.h"

int square_position(int *square_map, int map_size, int ign)
{
	int i = 0;

	for (int k = 0; k < (map_size - ign); k++) {
		if (square_map[i] < square_map[k]) {
			i = k;
		}
	}
	return (square_map[i]);
}

int pars_value(int *square_map, int map_size, int ign)
{
	int i = 0;

	for (int k = 0; k < (map_size - ign); k++) {
		if (square_map[i] < square_map[k]) {
			i = k;
		}
	}
	return (i + ign);
}
