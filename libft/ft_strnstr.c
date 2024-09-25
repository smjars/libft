/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:45:24 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/21 17:52:19 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ll;
	size_t	bl;

	if (!*little)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	ll = ft_strlen(little);
	bl = ft_strlen(big);
	if (len > bl)
		len = bl;
	while (len >= ll)
	{
		if (ft_strncmp(big, little, ll) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
/*#include "stdio.h"
int	main(void)
{
	const char *cd1 = "42 Madrid Telefónica";
	const char *cd2 = "Madrid";
	char *res;

	res = ft_strnstr(cd1, cd2, 19);
	if (res)
		printf("sub cadena: %s\n", res);
	else
		printf("sub cadena no encontrada.\n");
	return (0);
}*/
