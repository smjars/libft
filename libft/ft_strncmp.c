/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:41:08 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/19 21:07:01 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cnt;

	cnt = 0;
	if (n == 0)
		return (0);
	while (cnt < n && s1[cnt] && s2[cnt] && s1[cnt] == s2[cnt])
		cnt++;
	if (cnt == n)
		return (0);
	return ((unsigned char)s1[cnt] - (unsigned char)s2[cnt]);
}
/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error, se requiere 3 parametros\n");
		return (1);
	}
	const char *a = argv[1];
	const char *b =  argv[2];
	int av = argv[3][0];
	printf("strncmp %d\n", ft_strncmp(a, b, av));
	return (0);
}*/
