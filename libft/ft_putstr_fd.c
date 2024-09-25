/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 05:34:15 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/23 06:00:43 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//size_t  ft_strlen(const char *s);
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
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
	ft_putstr_fd(str, fd);
	if (close(fd) == -1)
	{
		perror("Error al cerrar el archivo");
		return 1;
	}
	return (0);
}*//* Esta funcion imprime o escribe la cadena de caracteres en la consola
o en un archivo. en el ejemplo se crea un archivo.*/
