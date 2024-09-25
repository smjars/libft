/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 23:31:16 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/23 03:08:51 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_digit_count(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	unsigned int	ncpy;
	int				i;
	char			*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		ncpy = -n;
	else
		ncpy = n;
	i = ft_digit_count(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	while (i--)
	{
		str[i] = (ncpy % 10) + '0';
		ncpy /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
/*#include <stdio.h>
int	main(void)
{
	int	numbers[] = {123, -456, 0, 2147483647, -2147483648};
	char	*result;
	size_t	i;

	i = 0;
	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		result = ft_itoa(numbers[i]);
		if (!result)
		{
			printf("Error al convertir el número %d.\n", numbers[i]);
			return (1);
		}
		printf("Número: %d, Cadena: %s\n", numbers[i], result);
		free(result);
		i++;
	}
	return (0);
} //esta funcion convierte un int en string.*/
