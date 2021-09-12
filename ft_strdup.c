/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksae-hyu <ksae-hyu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 22:53:41 by ksae-hyu          #+#    #+#             */
/*   Updated: 2021/09/11 17:19:56 by ksae-hyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	size_t	len;
	char	*s_clone;

	i = 0;
	len = ft_strlen(s);
	s_clone = (char *)malloc((len + 1) * (sizeof(char)));
	if (!s_clone)
		return (NULL);
	while (s[i])
	{	
		s_clone[i] = s[i];
		i++;
	}
	s_clone[i] = '\0';
	return (s_clone);
}
