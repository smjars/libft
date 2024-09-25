/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:02:55 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/22 21:31:51 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	sl;

	if (!s)
		return (NULL);
	sl = ft_strlen(s);
	if (start >= sl)
		return (ft_strdup(""));
	if (len > sl - start)
		len = sl - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr [len] = '\0';
	return (substr);
}
/*#include <stdio.h>
int	main(void)
{
	char	*str = "Hello, world!";
	char	*substr;

	// Caso 1: Substring dentro del rango
	substr = ft_substr(str, 7, 5);
	printf("Caso 1: %s\n", substr);
	free(substr);
	// Caso 2: Substring que empieza fuera del rango
	substr = ft_substr(str, 20, 5);
	printf("Caso 2: %s\n", substr);
	free(substr);
	// Caso 3: Substring con longitud mayor que el resto de la cadena
	substr = ft_substr(str, 7, 20);
	printf("Caso 3: %s\n", substr);
	free(substr);
	// Caso 4: Substring desde el inicio
	substr = ft_substr(str, 0, 5);
	printf("Caso 4: %s\n", substr);
	free(substr);
	return (0);
}*/
