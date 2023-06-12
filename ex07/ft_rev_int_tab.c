/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adokhnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:48:17 by adokhnia          #+#    #+#             */
/*   Updated: 2023/06/12 13:48:18 by adokhnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	iter;

	iter = 0;
	while (iter < size / 2)
	{
		temp = tab[iter];
		tab[iter] = tab[size - iter - 1];
		tab[size - iter - 1] = temp;
		iter++;
	}
}
