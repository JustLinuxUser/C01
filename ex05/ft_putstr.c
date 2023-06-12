#include <unistd.h>

void	ft_putstr(char *str)
{
	int	iter;

	iter = 0;
	while (str[iter] != '\0')
	{
		write(1, &str[iter], 1);
		iter++;
	}
}
