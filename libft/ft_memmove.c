/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 20:44:00 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/21 16:41:25 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	if (!dest && !src)
		return (NULL);
	p1 = (unsigned char *)dest;
	p2 = (unsigned char *)src;
	if (p1 < p2)
	{
		while (n--)
			*p1++ = *p2++;
	}
	else
	{
		p1 += n;
		p2 += n;
		while (n--)
			*(--p1) = *(--p2);
	}
	return (dest);
}
