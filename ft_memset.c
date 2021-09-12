/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksae-hyu <ksae-hyu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 22:53:19 by ksae-hyu          #+#    #+#             */
/*   Updated: 2021/09/06 02:05:40 by ksae-hyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *str, int c, size_t size)
{
	char	*str_ptr;

	str_ptr = (char *)str;
	while (size-- > 0)
		*(str_ptr)++ = (char)c;
	return (str);
}
