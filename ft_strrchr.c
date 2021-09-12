/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksae-hyu <ksae-hyu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 22:54:06 by ksae-hyu          #+#    #+#             */
/*   Updated: 2021/09/07 01:23:48 by ksae-hyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_ptr;
	size_t	len;

	s_ptr = (char *)s;
	len = ft_strlen(s);
	if (c == 0)
		return (s_ptr + len);
	while (len--)
	{
		if (s_ptr[len] == (char)c)
			return (s_ptr + len);
	}
	return (NULL);
}
