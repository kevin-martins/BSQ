/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** putstr
*/

int my_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i += 1;
	return (i);
}
