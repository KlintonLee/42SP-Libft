/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksae-hyu <ksae-hyu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 22:52:30 by ksae-hyu          #+#    #+#             */
/*   Updated: 2021/09/07 01:32:32 by ksae-hyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t size)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		if ((unsigned char) str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}
