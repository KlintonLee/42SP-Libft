/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksae-hyu <ksae-hyu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 22:52:49 by ksae-hyu          #+#    #+#             */
/*   Updated: 2021/09/06 00:58:15 by ksae-hyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

void	*ft_calloc(size_t nbr_elem, size_t size)
{
	void	*data;

	data = (void *)malloc(nbr_elem * size);
	ft_bzero(data, nbr_elem * size);
	return (data);
}
