/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:38:07 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/21 22:13:22 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief convert a string to an integer
 * 
 * converts the initial portion of the string pointed to by nptr to int
 * @param str 
 * @return The converted value or 0 on error.
 */
int	ft_atoi(const char *str)
{
	int			sign;
	long long	value;

	sign = 1;
	value = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		if (value > (LLONG_MAX - (*str - '0')) / 10)
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
		value = value * 10 + (*str++ - '0');
	}
	return (sign * value);
}
/*#include <stdio.h>
int	main(void)
{
    const char *p1 = "  -53020";
    const char *p2 = "28";
    const char *p3 = "   +586";
    const char *p4 = "   2147483647";
    const char *p5 = "   -2147483648";
    const char *p6 = "   9223372036854775807";
    const char *p7 = "   -9223372036854775808";
    const char *p8 = "   9223372036854775808";
    const char *p9 = "   -9223372036854775809";

    printf("P1 entrada: %s retorno: %d\n", p1, ft_atoi(p1));
    printf("P2 entrada: %s retorno: %d\n", p2, ft_atoi(p2));
    printf("P3 entrada: %s retorno: %d\n", p3, ft_atoi(p3));
    printf("P4 entrada: %s retorno: %d\n", p4, ft_atoi(p4));
    printf("P5 entrada: %s retorno: %d\n", p5, ft_atoi(p5));
    printf("P6 entrada: %s retorno: %d\n", p6, ft_atoi(p6));
    printf("P7 entrada: %s retorno: %d\n", p7, ft_atoi(p7));
    printf("P8 entrada: %s retorno: %d\n", p8, ft_atoi(p8));
    printf("P9 entrada: %s retorno: %d\n", p9, ft_atoi(p9));
    return (0);
}*/
