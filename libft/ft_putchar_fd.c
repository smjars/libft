/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 05:11:54 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/23 05:30:33 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int	main(void)
{
	ft_putchar_fd('4', 1);
	ft_putchar_fd('2', 1);
	ft_putchar_fd(' ', 1);
	ft_putchar_fd('M', 1);
	ft_putchar_fd('a', 1);
	ft_putchar_fd('d', 1);
	ft_putchar_fd('r', 1);
	ft_putchar_fd('i', 1);
	ft_putchar_fd('d', 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*//* la funcion simplemente improme un caracter por la salida espesificada
en el ejemplo el 1 es la salida standarout(consola), el 0 es entrada sntandrin
(teclado) y el 2 es para la salida de standarerror(consola)*/
