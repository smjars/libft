/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 23:29:32 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/19 16:33:11 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	cnt;

	cnt = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + cnt);
	while (cnt >= 0)
	{
		if (s[cnt] == (char)c)
			return ((char *)&s[cnt]);
		cnt--;
	}
	return (NULL);
}
/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error, ingresa 2 parametros String y un Char ''\n");
		return(1);
	}
	const char *s = argv[1];
	int c = argv[2][0];

	printf("%s\n", ft_strrchr(s, c));
	return (0);
}*/
