/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 23:29:18 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/23 02:45:03 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	wordlen(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static size_t	countwords(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			s += wordlen(s, c);
		}
		else
			s++;
	}
	return (count);
}

static	void	free_strs(char **strs)
{
	size_t	i;

	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);
}

char	**ft_split(const char *s, char c)
{
	char	**strs;
	int		i;
	int		count;

	if (!s)
		return (NULL);
	count = countwords(s, c);
	strs = (char **)malloc(sizeof(char *) * (count + 1));
	if (!strs)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			strs[i] = ft_substr(s, 0, wordlen(s, c));
			if (!strs[i++])
				return (free_strs(strs), NULL);
			s += wordlen(s, c);
		}
		else
			s++;
	}
	strs[i] = NULL;
	return (strs);
}
/*#include <stdio.h>
int	main(void)
{
	char	**result;
	int	i;
	const char	*str = "Hola, esto es una prueba";
	char	delimiter = ' ';

	result = ft_split(str, delimiter);
	if (!result)
	{
		printf("Error al dividir la cadena.\n");
		return (1);
	}
	i = 0;
	while (result[i])
	{
		printf("Palabra %d: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
} // esta funcion simplemente corta cada palabra segun el delimitador " "*/
