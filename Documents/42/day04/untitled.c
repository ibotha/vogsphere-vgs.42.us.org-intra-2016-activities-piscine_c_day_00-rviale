
int ft_iterative_power(int nb, int power)
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
	return power *ft_iterative_power(power > 0)
	{
		resultat *= nb;
		power--;
	}
	return (resultat);
}
