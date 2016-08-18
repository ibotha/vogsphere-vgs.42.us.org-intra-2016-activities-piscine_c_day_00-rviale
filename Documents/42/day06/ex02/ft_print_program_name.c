/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rviale <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 16:58:18 by rviale            #+#    #+#             */
/*   Updated: 2016/08/17 16:58:28 by rviale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_putchar(char c);

int		main(int tbc, char *tbg[])
{
	int i;
	int z;

	i = 1;
	z = 0;
	while (i < tbc)
	{
		printf("je suis ICI\t :  \t %d\n ", tbc);
		printf("je suis ICI\t :  \t %d\n ", i);
		while (tbg[i][z])
		{
			ft_putchar(tbg[i][z]);
			printf("je suis ICI\t :  \t %c\n ", tbg[i][z]);
			z++;
		}
		ft_putchar('\n');
		z = 0;
		i++;
	}
	return (0);
}
