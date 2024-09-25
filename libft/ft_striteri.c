/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 04:37:14 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/23 05:02:33 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*#include <stdio.h>
void	test_chrplusplus(unsigned int i, char *c)
{
	*c = *c + i;
}
int	main(void)
{
	char str[] = "abc";
	printf("string recibido: %s\n", str);
	ft_striteri(str, test_chrplusplus);
	printf("string modificado %s\n", str);
	return (0);
}*//*esta funcion recorre el string y le aplicalo que 
haga la funcion, y al ser un puntero se modifica el
string.*/
