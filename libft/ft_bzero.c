/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:16:11 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/19 21:56:07 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*#include <stdio.h>
int	main(void)
{
	char str[40] = "42 Madrid Telefónica";

	printf("antes: %s\n", str);
	ft_bzero(str, 5);
	printf("despues: %s\n", str);
	return (0);
}
//basicamente es borrar el string, ya que al ponerlo en '\0' simplemente
//el printf no lo recorre.*/
