/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "my.h"

int check_littlest(int *square_map, int down_line, int i)
{
	if (square_map[i - down_line - 1] <= square_map[i - down_line] &&
		square_map[i - down_line - 1] <= square_map[i - 1])
		return (square_map[i - down_line - 1]);
	else if (square_map[i - down_line] <= square_map[i - down_line - 1] &&
		square_map[i - down_line] <= square_map[i - 1])
		return (square_map[i - down_line]);
	else if (square_map[i - 1] <= square_map[i - down_line - 1] &&
		square_map[i - 1] <= square_map[i - down_line])
		return (square_map[i - 1]);
	else
		return (square_map[i]);
	return (0);
}

int *check_int(int *square_map, int map_size, int down_line)
{
	for (int i = down_line + 1; i < map_size; i++) {
		while (square_map[i] == '0' && square_map[i] != '\0')
			i++;
		if (square_map[i - down_line - 1] > 0 &&
			square_map[i - down_line] > 0 &&
			square_map[i - 1] > 0 && square_map[i] > 0) {
			square_map[i] = check_littlest(square_map,
							down_line, i);
			square_map[i] += 1;
		}
	}
	return (square_map);
}

int change_map(char *map, int map_size)
{
	int *square_map = NULL;
	int ign = 0;
	int down_line = 0;

	if ((ign = ignore_nbr(map)) == 84 ||
		(down_line = size_col(map, ign)) == 84 ||
		check_error(map, map_size, ign) == 84 ||
		(square_map = malloc(sizeof(int) * (map_size - ign))) == NULL)
		return (84);
	for (int i = 0; map[ign + i] != '\0'; i++)
		square_map[i] = value_to_square_map(map, square_map, ign, i);
	square_map = check_int(square_map, map_size, down_line);
	map = draw_biggest_square(map,
		square_position(square_map, map_size, ign),
		pars_value(square_map, map_size, ign), down_line);
	free(square_map);
	print_charmap(map, map_size, ign);
	free(map);
	return (0);
}

int read_map(int fd, char *file)
{
	struct stat st;
	char *map = NULL;

	stat(file, &st);
	map = malloc(sizeof(char) * st.st_size);
	if (map == NULL || read(fd, map, st.st_size) == -1 ||
		change_map(map, st.st_size) == 84)
		return (84);
	return (0);
}

int main(int ac, char **av)
{
	int fd;

	if (ac != 2)
		return (84);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (84);
	read_map(fd, av[1]);
	return (0);
}
