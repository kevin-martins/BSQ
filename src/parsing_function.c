/*
** EPITECH PROJECT, 2018
** parsing_function
** File description:
** pars
*/

#include "my.h"

int ignore_nbr(char *map)
{
	int i = 0;

	if (map[i] == '\0')
		return (84);
	while (map[i] != '\n') {
		if (map[i] >= '0' && map[i] <= '9')
			i++;
		if (map[i] == 'o' || map[i] == '.')
			return (84);
	}
	i++;
	if (map[i] == '\0')
		return (84);
	return (i);
}

int size_col(char *map, int ign)
{
	int i = 0;

	if (ign == 84)
		return (84);
	while (map[ign + i] != '\n')
		i++;
	i++;
	return (i);
}

int check_error(char *map, int map_size, int ign)
{
	for (; ign < map_size; ign++)
		if (map[ign] != 'o' && map[ign] != '.' && map[ign] != '\n' &&
			map[ign] != '\0')
			return (84);
	return (0);
}
