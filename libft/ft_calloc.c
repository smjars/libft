/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <imarvin@42.fr>                    +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:20:38 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/21 22:48:03 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (count == 0 || size == 0)
		return (malloc(0));
	total_size = count * size;
	if (total_size / count != size)
		return (NULL);
	ptr = malloc(total_size);
	if (ptr != NULL)
		ft_bzero(ptr, total_size);
	return (ptr);
}
/*#include <stdio.h>
int	main(void)
{
	size_t	count = 5;
	size_t	size = sizeof(int);
	int *array;
	size_t i;

	array = (int *)ft_calloc(count, size);
	if (array == NULL)
	{
		printf("Memory allocation failed\n");
			return 1;
	}
	//imprime la memoria asignada para verificar que este en cero.
	i = 0;
	while (i < count)
	{
		printf("array[%zu] = %d\n", i, array[i]);
		i++;
	}
	//se libera la memoria asignada.
	free(array);
	return (0);
}*/
