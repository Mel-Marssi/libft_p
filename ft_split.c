/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mars < mel-mars@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:04:57 by mel-mars          #+#    #+#             */
/*   Updated: 2023/09/21 17:55:58 by mel-mars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int		i;
	int		count_w;

	i = 0;
	count_w = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i - 1] != c)
			count_w++;
		i++;
	}
	return (count_w + 1);
}

static size_t	str_c(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static void	split_2(char **split, char *s01, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s01[i])
	{
		if (s01[i] == c)
			i++;
		else
		{
			split[j] = ft_substr(s01, i, str_c(&s01[i], c));
			if (split[j] == NULL)
			{
				while (j > 0)
					free(split[j--]);
				return (free(split));
			}
			i = i + str_c(&s01[i], c);
			j++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	
	split = ft_calloc(count_word((char *)s, c) + 1, sizeof(char *));
	if (!split)
		return (NULL);
	split_2(split, (char *)s, c);
	return (split);
}
