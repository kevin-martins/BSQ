/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef _MY_H
#define MY_H
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

void print_charmap (char *map, int map_size, int ign);
int ignore_nbr(char *map);
int size_col(char *map, int ign);
int pars_value(int *square_map, int map_size, int ign);
int value_to_square_map(char *map, int *square_map, int ign, int i);
int square_position(int *square_map, int map_size, int ign);
char *draw_biggest_square(char *map, int square_value,
				int square_position, int down_line);
int check_error(char *map, int map_size, int ign);
void my_putchar (char const c);
#endif /* _MY_H_ */
