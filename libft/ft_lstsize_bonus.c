/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:51:32 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/24 17:48:28 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//t_list  *ft_lstnew(void *content);
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/* ft_lstsize recorre la lista y devuelve su longitud
para eso creo la variable i y la voy aumentanto en el while,
el cual sumara 1 a i si lst tiene valor, es por eso que dentro
del while hago que lst sea igual a lst->next, y ese next es el
siguiente elemento de la lista, y en caso de que ya no existan
mas elementos en la lista, pues ese next sera null y acaba el bucle
y al final returno i que sera igual al total de elementos de la lista.
*/
/*#include <stdio.h>
int main ()
{
	t_list *node1 = ft_lstnew("42");
	t_list *node2 = ft_lstnew("Madrid");
	t_list *node3 = ft_lstnew("Telefonica");

	node1->next = node2; //enlazo el nodo1 con el  nodo2
	node2->next = node3; //enlazon el nodo2 con el nodo3

	int size_lst = ft_lstsize(node1);

	printf("Tamaño de la lista: %d\n", size_lst);

	return (0);
}*/
