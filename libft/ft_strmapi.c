/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 01:16:45 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/23 03:57:41 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*size_t  ft_strlen(const char *s);*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*result;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*#include <stdio.h>
char     test_tolower(unsigned int ui, char c)
{
	(void)ui;
        if (c >= 'A' && c <= 'Z')
                return (c + 32);
        return ((char)c);
}
int	main(void)
{
	char	*str = "42 MADRID TELEFONICA";
	char	*result;

	result = ft_strmapi(str, test_tolower);
	if (result)
	{
		printf("Antes: %s\n", str);
		printf("Despues: %s\n", result);
		free(result);
	}
	else
		printf("Error, no se pudo asignar la memoria.\n");
	return (0);
}*//* ft_strmapi crea una nueva cadena donde cada caracter es el resultado
de aplicar la funcion f al caracter correspondiende de la cadena original s
y su indice. la nueva cadena se almacena result y se retorna*/
