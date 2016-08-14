/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rviale <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 22:54:32 by rviale            #+#    #+#             */
/*   Updated: 2016/08/13 22:54:38 by rviale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int resultat;
	
	resultat = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 1)
	{
		return (1);
	}
	return (nb * (ft_recursive_power(nb , power - 1)));
}
