/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rviale <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 18:44:50 by rviale            #+#    #+#             */
/*   Updated: 2016/08/13 18:45:13 by rviale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int index;
	int total;

	index = nb - 1;
	total = nb;
	if (nb > 12 || nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (index > 0)
	{
		total *= index;
		index--;
	}
	return (total);
}
