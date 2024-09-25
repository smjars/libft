/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:36:46 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/25 16:00:11 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*#include <stdio.h>
int	main(void)
{
	t_list *node;
	char *content;

	content = "42, Madrid";
	node = ft_lstnew((void *)content);
	if (node)
	{
		printf("Contenido del nodo: %s\n", (char *)node->content);
		printf("Siguiente nodo: %p\n", (void *)node->next);
	}
	else
		printf("Error al crear el nodo.\n");
	free(node);
	return (0);
}*//* ft_lsnew crea un nuevo nodo para una lista enlazada, 
almacena content(cualquier tipo) enviado al nodo y le asigna 
al siguiente nodo NULL. Si la reserva de memoria falla retorna NULL */
