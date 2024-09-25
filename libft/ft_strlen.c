/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:04:00 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/25 16:32:47 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	cnt;

	if (!s)
		return (0);
	cnt = 0;
	while (s[cnt] != '\0')
		cnt++;
	return (cnt);
}
/*#include <stdio.h>
int	main (int argc, char *argv[])
{
	if (argc != 2)
		return(printf("Error!!, se requiere 1 string como parametro\n"));
	printf("longitud del string es: %zu\n", ft_strlen(argv[1]));
	return (0);
}*/
