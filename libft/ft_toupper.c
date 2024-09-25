/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:30:22 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/18 20:01:16 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int u)
{
	if (u >= 'a' && u <= 'z')
		return (u - 32);
	return (u);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("resultado: %c\n", ft_toupper('b'));
	return (0);
}*/
