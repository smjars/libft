/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 06:08:24 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/23 06:30:03 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//size_t  ft_strlen(const char *s);
void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*#include <fcntl.h>
#include <stdio.h>
int main ()
{
	char *str = "42 Madrid Telefónica";
	
	int fd;

	fd = open("borrar.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
	{
		perror("Error al abrir archivo");
		return 1;
	}
	ft_putendl_fd(str, fd);
	if (close(fd) == -1)
	{
		perror("Error al cerrar el archivo");
		return 1;
	}
	return (0);
}*//* igual que ft_putstr_fd solo que agrega un salto de linea al final en
la consola o en un archivo.*/
