/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksae-hyu <ksae-hyu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 22:53:38 by ksae-hyu          #+#    #+#             */
/*   Updated: 2021/09/07 01:09:26 by ksae-hyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *str, int c)
{
	char	*str_ptr;

	str_ptr = (char *)str;
	while (*str_ptr)
	{
		if (*str_ptr == (char)c)
			return (str_ptr);
		str_ptr++;
	}
	if (*str_ptr == (char)c)
		return (str_ptr);
	return (NULL);
}
