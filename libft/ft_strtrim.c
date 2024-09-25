/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 22:53:07 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/22 23:23:46 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1 + start, len + 1);
	return (res);
}
/*#include <stdio.h>
int main(void)
{
	char *s1 = "   42 Madrid Telefónica   ";
	char *set = " ";
	char *str_rct;

	str_rct = ft_strtrim(s1, set);
	if (str_rct)
	{
		printf("Original: '%s'\n", s1);
		printf("Recortada: '%s'\n", str_rct);
		free(str_rct);
	}
	else
		printf("Error: ft_strtrim retorna  NULL\n");
	return (0);
}*/
