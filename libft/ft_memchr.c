/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:38:10 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/20 13:51:33 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = (unsigned char *) s;
	while (n--)
	{
		if (*p == (unsigned char) c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
/*#include <stdio.h>
int	main(void)
{
	char prueba[] = {'4','2',' ','M','a','d','r','i','d'};

	char *pos = ft_memchr(prueba, 'M', 9);
	if (pos == NULL)
		printf("1- no se encontro\n");
	else
	{
		printf("P-1:\npos[0] = %c\npos[1] = %c\n", pos[0], pos[1]);
	}

	char str[] = "42-Madrid";
	char *ciudad = ft_memchr(str, '-', 9);
	ciudad++;
	printf("P-2:\n%s\n", ciudad);
	return (0);
}*/
