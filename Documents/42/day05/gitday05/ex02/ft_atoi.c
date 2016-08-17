/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rviale <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 13:58:35 by rviale            #+#    #+#             */
/*   Updated: 2016/08/16 13:58:41 by rviale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_g(char *str, int i, int negativ, unsigned long long nb)
{
	while ((str[i] <= 32))
		i++;
	if (str[i] == 45)
	{
		negativ = 1;
		i++;
	}
	if ((str[i] == 45) || (str[i] == 43))
	{
		if (negativ == 1)
			return (0);
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = (nb * 10) + ((int)str[i] - '0');
		i++;
	}
	if (nb > (unsigned long long)9223372036854775806 && negativ == 0)
		return (-1);
	if (nb > (unsigned long long)9223372036854775807 && negativ == 1)
		return (0);
	if (negativ == 1)
		nb = -nb;
	return (nb);
}

int		ft_atoi(char *str)
{
	return (ft_g(str, 0, 0, 0));
}
