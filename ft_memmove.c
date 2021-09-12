/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksae-hyu <ksae-hyu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 22:53:16 by ksae-hyu          #+#    #+#             */
/*   Updated: 2021/09/06 02:04:43 by ksae-hyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char	*src_ptr;
	char	*dest_ptr;

	src_ptr = (char *)src;
	dest_ptr = (char *)dest;
	if (dest_ptr >= src_ptr)
	{
		src_ptr = (char *)src + (size - 1);
		dest_ptr = (char *)dest + (size - 1);
		while (size--)
			*dest_ptr-- = *src_ptr--;
	}
	else
		ft_memcpy(dest, src, size);
	return (dest);
}
