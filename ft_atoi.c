/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksae-hyu <ksae-hyu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 22:52:42 by ksae-hyu          #+#    #+#             */
/*   Updated: 2021/09/11 14:51:11 by ksae-hyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str_nbr)
{
	int	i;
	int	nbr;
	int	is_positive;

	i = 0;
	nbr = 0;
	is_positive = 1;
	while ((str_nbr[i] >= 9 && str_nbr[i] <= 13) || str_nbr[i] == 32)
		i++;
	if (str_nbr[i] == '-')
		is_positive *= -1;
	if (str_nbr[i] == '-' || str_nbr[i] == '+')
		i++;
	while (str_nbr[i] >= '0' && str_nbr[i] <= '9')
	{
		nbr = (str_nbr[i] - '0') + (nbr * 10);
		i++;
	}
	nbr *= is_positive;
	return (nbr);
}
