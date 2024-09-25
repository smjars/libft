/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 22:23:55 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/09/25 17:29:59 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;
	void	*new_content;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_elem = ft_lstnew(new_content);
		if (!new_elem)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}
/* ft_lstnew: Crea un nuevo nodo con el contenido proporcionado.
ft_lstadd_back: añade un nodo al final de la lista.
ft_lstclear: Elimina y libera toda la lista.
del: funcion pasada al programa para liberar e contenido de un nodo.
ft_lstmap: Itera sobre la lista lst, aplicando la función f a cada
contenido de los nodos y creando una nueva lista con los resultados.*/
/*#include <stdio.h>
// Función para duplicar el contenido (ejemplo) y lo multiplico * 2
void	*duplicate_content(void *content)
{
	int *new_content = malloc(sizeof(int));
	if (new_content)
        	*new_content = *(int *)content * 2;
	return (new_content);
}
// Función para liberar el contenido
void	delete_content(void *content)
{
	free(content);
}
// Función para imprimir la lista (para verificar el resultado)
void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d -> ", *(int *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	// Crear una lista de ejemplo
	t_list *lst = ft_lstnew(malloc(sizeof(int)));
	*(int *)lst->content = 1;
	lst->next = ft_lstnew(malloc(sizeof(int)));
	*(int *)lst->next->content = 2;
	lst->next->next = ft_lstnew(malloc(sizeof(int)));
	*(int *)lst->next->next->content = 3;

	// Imprimir la lista original
	printf("Lista original: ");
	print_list(lst);

	// Aplicar ft_lstmap
	t_list *new_list = ft_lstmap(lst, duplicate_content, delete_content);

	// Imprimir la nueva lista
	printf("Nueva lista: ");
	print_list(new_list);

	// Liberar memoria
	ft_lstclear(&lst, delete_content);
	ft_lstclear(&new_list, delete_content);
	return (0);
}*/
