int	ft_strlen(char *str)
{
	int	iter;

	iter = 0;
	while (str[iter] != '\0')
		iter++;
	return (iter);
}
