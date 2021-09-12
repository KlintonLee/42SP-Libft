/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksae-hyu <ksae-hyu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 22:54:09 by ksae-hyu          #+#    #+#             */
/*   Updated: 2021/09/11 20:15:25 by ksae-hyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

size_t	ft_strnlen(const char *str, size_t n)
{
	size_t	i;

	i = 0;
	while (str[i] && i < n)
		i++;
	return (i);
}

char	*ft_substr(char const *str, unsigned int start, size_t size)
{
	char			*s_copy;
	unsigned int	i;

	if (!str)
		return (NULL);
	i = ft_strlen(str);
	if (i < start)
		return (ft_strdup(""));
	size = ft_strnlen(&str[start], size);
	s_copy = (char *) malloc(sizeof(char) * size + 1);
	if (!s_copy)
		return (NULL);
	ft_strlcpy(s_copy, &str[start], size + 1);
	return (s_copy);
}
