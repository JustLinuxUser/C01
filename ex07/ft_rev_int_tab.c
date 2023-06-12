void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	iter;

	iter = 0;
	while (iter < size / 2)
	{
		temp = tab[iter];
		tab[iter] = tab[size - iter - 1];
		tab[iter] = temp;
		iter++;
	}
}
