/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksae-hyu <ksae-hyu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 22:53:50 by ksae-hyu          #+#    #+#             */
/*   Updated: 2021/09/07 00:16:33 by ksae-hyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	len = i;
	while (src[j] && (i + 1) < size)
		dest[i++] = src[j++];
	if (i < size)
		dest[i] = '\0';
	return (len + ft_strlen(src));
}
