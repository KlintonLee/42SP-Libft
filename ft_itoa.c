/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksae-hyu <ksae-hyu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 22:52:28 by ksae-hyu          #+#    #+#             */
/*   Updated: 2021/09/11 20:29:00 by ksae-hyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

static int	ft_check_is_negative(int nbr)
{
	if (nbr >= 0)
		return (0);
	else
		return (1);
}

static int	ft_count_digits(int nbr)
{
	int	digits;

	digits = 0;
	if (ft_check_is_negative(nbr))
		nbr *= -1;
	while (nbr > 0)
	{
		nbr /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int nbr)
{
	int		digits_count;
	int		i;
	char	*ascii;

	if (nbr == 0)
		return (ft_strdup("0"));
	if (nbr == INT_MIN)
		return (ft_strdup("-2147483648"));
	digits_count = ft_count_digits(nbr) + ft_check_is_negative(nbr) + 1;
	ascii = (char *) malloc(digits_count * sizeof(char));
	if (!ascii)
		return (NULL);
	if (ft_check_is_negative(nbr))
		ascii[0] = '-';
	i = digits_count - 2;
	if (ft_check_is_negative(nbr))
		nbr *= -1;
	while (nbr > 0)
	{
		ascii[i] = (nbr % 10) + 48;
		nbr = nbr / 10;
		i--;
	}
	ascii[digits_count - 1] = '\0';
	return (ascii);
}
