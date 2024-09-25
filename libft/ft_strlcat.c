/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:18:25 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/21 20:53:47 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	cl;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	cl = size - d - 1;
	if (size <= d)
		return (size + s);
	if (cl > s)
		cl = s;
	ft_memcpy(dst + d, src, cl);
	dst[d + cl] = '\0';
	return (d + s);
}
/*#include <stdio.h>
int	main(void)
{
	char	s[] = "42 Madrid Telefónina";
	char	d[30];
	size_t	l;

	l = ft_strlcat(d, s, sizeof(d) - 1);
	printf("return: %zu\n", l);
}*/
