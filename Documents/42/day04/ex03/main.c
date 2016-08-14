/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rviale <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 22:55:36 by rviale            #+#    #+#             */
/*   Updated: 2016/08/13 22:55:43 by rviale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_recursive_power (int nb, int power);
int		main(void)
{
	printf("number of end : %d \n", ft_recursive_power(6, 6));
	return (0);
}
