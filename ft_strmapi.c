/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksae-hyu <ksae-hyu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 22:53:57 by ksae-hyu          #+#    #+#             */
/*   Updated: 2021/09/11 20:32:13 by ksae-hyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;
	char	len;

	i = 0;
	len = ft_strlen((char *)str);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result)
	{
		while (i < len)
		{
			result[i] = f(i, str[i]);
			i++;
		}
		result[i] = '\0';
		return (result);
	}
	return (NULL);
}
