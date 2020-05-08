/*
** EPITECH PROJECT, 2018
** draw_biggest_square
** File description:
** biggest_square
*/

#include "my.h"

char *draw_right_square(char *map, int square_value,
				int square_position, int down_line)
{
	for (int i = 0; i < square_value; i++) {
		map[square_position] = 'x';
		square_position -= down_line;
	}
	return (map);
}

char *draw_bot_square(char *map, int square_value, int square_position)
{
	for (int i = 0; i < square_value; i++) {
		map[square_position] = 'x';
		square_position -= 1;
	}
	return (map);
}

char *draw_diag(char *map, int square_value, int square_position, int down_line)
{
	int down = down_line;

	for (int j = 0; square_value -1 != j; j++) {
		for (int i = 0; square_value != i; i++)
			map[square_position - i - down_line] = 'x';
		down_line += down;
	}
	return (map);
}

char *draw_biggest_square(char *map, int square_value,
				int square_position, int down_line)
{
	map = draw_right_square(map, square_value, square_position, down_line);
	map = draw_bot_square(map, square_value, square_position);
	map = draw_diag(map, square_value, square_position, down_line);
	return (map);
}
