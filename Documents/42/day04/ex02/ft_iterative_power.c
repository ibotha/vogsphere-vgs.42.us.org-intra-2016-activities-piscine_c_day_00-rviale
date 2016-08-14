/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rviale <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 23:10:00 by rviale            #+#    #+#             */
/*   Updated: 2016/08/13 23:10:16 by rviale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
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
	while (power)
	{
		resultat *= nb;
		power--;
	}
	return (resultat);
}


