/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rviale <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 17:02:07 by rviale            #+#    #+#             */
/*   Updated: 2016/08/18 17:02:12 by rviale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int main() {
	char		str[] = "salut";
	char		str2[] = " kkdkkd";
	char		str3[] = "372036";
	char		str4[] = "372036";

	
	printf("\n\nTest |%s|\n",str);
	printf("Ton strdup\t: %s\n", ft_strdup(str));
	printf("Leur strdup\t: %s", strdup(str));

	printf("\n\nTest |%s|\n",str2);
	printf("Ton strdup\t: %s\n", ft_strdup(str2));
	printf("Leur strdup\t: %s", strdup(str2));

	printf("\n\nTest |%s|\n",str3);
	printf("Ton strdup\t: %s\n", ft_strdup(str3));
	printf("Leur strdup\t: %s", strdup(str3));

	printf("\n\nTest |%s|\n",str4);
	printf("Ton strdup\t: %s\n", ft_strdup(str4));
	printf("Leur strdup\t: %s", strdup(str4));
	return 0;

}
