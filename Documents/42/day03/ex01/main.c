#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int		main(void)
{
	
	int i = 0;
	int *nbr;
	int **nbr2;
	int ***nbr3;
	int ****nbr;
	int *****nbr;
	int ******br;
	int *******nbr;
	int ********nbr;
	int *********nbr;
	
	nbr = &i;
	printf("numer debut:%d", i);
	ft_ft(*********nbr);
	printf("numer fin: %d", i);
	return (0);
}
