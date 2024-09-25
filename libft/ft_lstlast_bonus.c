/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:52:09 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/24 20:01:08 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
/* ft_lstlast esta funcion recorre la lista enlazada recibida y devuelve
un puntero al ultimo nodo de la lista, y si la lista esta vacia (Null)
la funcion tambien devolvea NULL*/
/*#include <stdio.h>
t_list	*ft_lstnew(void *content);
int	main(void)
{
	t_list *node1 = ft_lstnew("42");
	t_list *node2 = ft_lstnew("Madrid");
	t_list *node3 = ft_lstnew("Telefónica");

	node1->next = node2; //enlazo next del node1 con node2
	node2->next = node3; //enlazo next del node2 con node3 
	//imprimo la lista completa solo para ver que si es el ultimo
	printf("todos los nodos de la lista: \n");
	t_list *current = node1;
	while (current !=NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	t_list *last_node = ft_lstlast(node1);
	if(last_node)
		printf("El último nodo contiene: %s\n", (char *)last_node->content);

	return (0);
}*/
