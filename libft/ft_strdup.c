/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 19:43:16 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/22 20:58:05 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char			*rtr;
	int				i;
	unsigned char	*p;

	p = (unsigned char *)s;
	rtr = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!rtr)
		return (NULL);
	i = 0;
	while (p[i] != '\0')
	{
		rtr[i] = p[i];
		i++;
	}
	rtr[i] = '\0';
	return (rtr);
}
/*#include <stdio.h>
int	main(void)
{
	const char	*original = "Hola, mundo!";
	char	*duplicado;

	duplicado = ft_strdup(original);
	if (duplicado == NULL)
	{
		printf("Error al duplicar la cadena.\n");
		return (1);
	}
	printf("Original: %s\n", original);
	printf("Duplicado: %s\n", duplicado);
	free(duplicado);
	return (0);
}*/
