/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rviale <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 19:06:33 by rviale            #+#    #+#             */
/*   Updated: 2016/08/13 19:06:45 by rviale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int		ft_recursive_factorial (int nb, int power);
int		main(void)
{
	printf("number of end : %d \n", ft_recursive_factorial(3, 5));
	return (0);
}
