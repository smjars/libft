/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:42:17 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/24 20:09:00 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//t_list  *ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		last = ft_lstlast(*lst);
		if (last)
		{
			last->next = new;
		}
		else
			*lst = new;
	}
}
/*#include <stdio.h>
t_list  *ft_lstnew(void *content);
int	main()
{
	t_list *node1 = ft_lstnew("Node 1");
	t_list *node2 = ft_lstnew("Node 2");
	t_list *new = ft_lstnew("New");

	node1->next = node2; //enlazo a node1 el node2
	node2->next = NULL; //al node2 le pongo un enlace null
	new->next = NULL; // lo mismo con new, null en el next

	ft_lstadd_back(&node1, new);//agrego new al ultimo en la lista de node2

	//muestro que efectivamente ahora el ultimo nodo es new
	printf("%s\n", (char *)node1->next->next->content);

	return (0);
}*/
