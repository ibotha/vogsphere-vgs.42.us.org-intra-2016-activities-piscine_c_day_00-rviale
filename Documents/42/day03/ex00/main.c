#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int		main(void)
{
	
	int i = 0;
	int *nbr;
	nbr = &i;

	printf("numer debut:%d", i);
	ft_ft(nbr);
	printf("numer fin: %d", i);
	return (0);
}
