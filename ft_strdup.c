/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:57:39 by mel-mars          #+#    #+#             */
/*   Updated: 2022/10/15 11:58:34 by mel-mars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*hhh;
	int		h;

	h = ft_strlen(s1);
	hhh = ft_calloc(h + 1, sizeof(char));
	if (hhh == 0)
		return (0);
	ft_strlcpy(hhh, s1, h + 1);
	return (hhh);
}
