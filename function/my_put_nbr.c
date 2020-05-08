/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** put_nbr
*/

#include <unistd.h>

int my_put_nbr(int nb)
{
	int a;

	if (nb < 0) {
		my_putchar('-');
		nb = nb * (-1);
	}
	if (nb >= 0) {
		if (nb >= 10) {
			a = (nb % 10);
			nb = (nb - a) / 10;
			my_put_nbr(nb);
			my_putchar(48 + a);
		}
		else
			my_putchar(48 + nb % 10);
	}
	return (0);
}

int my_put_nbr_hexa(int nb)
{
	int a;

	if (nb < 0) {
		my_putchar('-');
		nb = nb * (-1);
	}
	if (nb >= 0) {
		if (nb >= 16) {
			a = (nb % 16);
			nb = (nb - a) / 10;
			my_put_nbr(nb);
			my_putchar(48 + a);
		}
		else
			my_putchar(48 + nb % 16);
        }
}
