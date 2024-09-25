/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 20:30:54 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/24 21:23:33 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/* ft_lstiter recorre cada nodo de la lista lst y aplica la funcion f
al contenido de cada nodo.*/
/*#include <stdio.h>
void print_content(void *content)
{
	printf("%s\n", (char * )content);
}
int	main()
{
	//lista de nodos de ejemplo
	t_list node3 = {"tercer nodo", NULL};
	t_list node2 = {"segundo nodo", &node3};
	t_list node1 = {"primer nondo", &node2};

	//le aplico la funcion de prueba print_cont a todos los nodos
	ft_lstiter(&node1, print_content);
}*/
