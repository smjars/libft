/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 06:35:18 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/23 06:51:01 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*size_t  ft_strlen(const char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);*/
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}
/*#include <stdio.h>
#include <fcntl.h>
int main() 
{
	int	fd;
	fd = open("borrar.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
		return (1);	
	ft_putnbr_fd(42, fd);
	close (fd);
	return (0);
}*//*Esta funcion pasa a string el numero que recibe y lo escribe en consola o 
en un archivo, en el ejemplo un archivo*/
