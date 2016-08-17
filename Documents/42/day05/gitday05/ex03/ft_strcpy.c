/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rviale <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 00:56:35 by rviale            #+#    #+#             */
/*   Updated: 2016/08/16 00:56:44 by rviale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcpy(char *s1, char *s2)
{
	size_t	size;

	size = 0;
	while (s2[size] != '\0')
	{
		s1[size] = s2[size];
		size++;
	}
	s1[size] = '\0';
	return (s1);
}
