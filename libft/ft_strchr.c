/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:53:55 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/18 22:39:06 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c || c == '\0')
		return ((char *)s);
	return (NULL);
}
/*#include <stdio.h>
int	main(void)
{
	const char *s = "prbueba123";
	int c = 'e';
	printf("%s\n", ft_strchr(s, c));
	return (0);
}*/
