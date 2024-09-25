/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:15:02 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/21 20:14:01 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	sl;
	size_t	cnt;

	sl = ft_strlen(src);
	cnt = 0;
	if (size > 0)
	{
		while (src[cnt] && cnt < size - 1)
		{
			dst[cnt] = src[cnt];
			cnt++;
		}
		dst[cnt] = '\0';
	}
	return (sl);
}
/*#include <stdio.h>
int	main(void)
{
	char	d[50];
	char	*s = "42 Madrid Telefónica";
	size_t	l;

	l = ft_strlcpy(d, s, sizeof(d));
	printf("longitud que se itento copiar: %zu\n", l);
	printf("asi quedo el string pasado: %s\n", s);
	return (0);
}*/
