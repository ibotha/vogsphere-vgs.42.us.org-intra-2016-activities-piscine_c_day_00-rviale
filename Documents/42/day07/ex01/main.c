/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rviale <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 21:39:17 by rviale            #+#    #+#             */
/*   Updated: 2016/08/18 21:39:22 by rviale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_range(int min, int max);

int main()
{
	printf("\n | Test |\n|");
	printf("\n|| rendu %s ||\n", ft_range(15, 10));	
	printf("\n | Test |\n");
	printf("\n|| rendu %s ||\n", ft_range(10, 10));	
	printf("\n | Test |\n");
	printf("\n|| rendu %s||\n", ft_range(10, 15));	
	return (0);
}
