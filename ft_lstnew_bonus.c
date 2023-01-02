/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:08:37 by mel-mars          #+#    #+#             */
/*   Updated: 2022/10/27 10:08:53 by mel-mars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n_node;

	n_node = malloc(sizeof(t_list));
	if (n_node == 0)
		return (0);
	n_node->content = content;
	n_node->next = 0;
	return (n_node);
}
