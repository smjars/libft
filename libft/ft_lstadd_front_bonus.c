/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:50:55 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/24 16:19:19 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*t_list  *ft_lstnew(void *content);*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
		new->next = *lst;
	*lst = new;
}
/* ft_lstadd_front agrega un nuevo nodo al inicio de una 
lista enlazada. verifica que los punteros no sean nulos. 
Si la lista no esta vacia y ajusta el puntero next del nuevo nodo
para que apunte al primer nodo actual de la lista.
por ultimo actualiza el puntero de la lista para que apunte al 
nuevo nodo, para que este sea el nuevo primer nodo de la lista.*/
/*#include <stdio.h>
int main ()
{
	t_list *lst = NULL;

	t_list *new_node = ft_lstnew("42");
	ft_lstadd_front(&lst, new_node);

	new_node = ft_lstnew("Madrid");
	ft_lstadd_front(&lst, new_node);

	new_node = ft_lstnew("Telefonica");
	ft_lstadd_front(&lst, new_node);

	// impresion de la lista :)
	t_list *current = lst;
	while (current != NULL)
	{
		printf("%s\n", (char *)current ->content);
		current = current->next;
	}
	
	return (0);
}*/
