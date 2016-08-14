/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rviale <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 19:08:06 by rviale            #+#    #+#             */
/*   Updated: 2016/08/13 19:08:13 by rviale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb, int power)
{
	int resultat;

	resultat =  1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 1)
	{
		return (1);
	}
	while(power == resultat)
	{
		resultat -= nb;
		power--;
	}
	return (resultat);
}
