/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 22:15:45 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/22 22:41:09 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	l1;
	size_t	l2;
	size_t	tl;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	tl = l1 + l2 + 1;
	res = (char *)malloc(sizeof(char) * tl);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, tl);
	ft_strlcat(res, s2, tl);
	return (res);
}
/*#include <stdio.h>
int	main(void)
{
	char *s1 = "Hola, ";
	char *s2 = "mundo!";
	char *res;

	res = ft_strjoin(s1, s2);
	if (res)
	{
		printf("Resultado: %s\n", res);
		free(res);
	}
	else
	{
		printf("Error uniendo  las cadenas.\n");
	}
	return (0);
}*/
