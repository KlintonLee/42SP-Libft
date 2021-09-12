/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksae-hyu <ksae-hyu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 22:53:33 by ksae-hyu          #+#    #+#             */
/*   Updated: 2021/09/11 03:17:57 by ksae-hyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

static int	ft_count_delimiters(char const *str, char c)
{
	int	am_I_a_word;
	int	delimiters_count;

	am_I_a_word = 0;
	delimiters_count = 0;
	while (*str)
	{
		if (*str == c && am_I_a_word == 1)
		{
			am_I_a_word = 0;
		}
		if (*str != c && am_I_a_word == 0)
		{
			delimiters_count++;
			am_I_a_word = 1;
		}
		str++;
	}
	return (delimiters_count);
}

static char	*ft_slice(char const *str, int start, int end)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = end - start + 1;
	dest = (char *)malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	while (start < end)
		dest[i++] = str[start++];
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		j;
	int		init_w;
	char	**split;

	i = -1;
	j = 0;
	init_w = -1;
	if (!str)
		return (NULL);
	split = malloc((ft_count_delimiters(str, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (++i <= (int) ft_strlen(str))
	{
		if (str[i] != c && init_w < 0)
			init_w = i;
		else if ((str[i] == c || i == (int) ft_strlen(str)) && init_w >= 0)
		{
			split[j++] = ft_slice(str, init_w, i);
			init_w = -1;
		}
	}
	split[j] = NULL;
	return (split);
}
