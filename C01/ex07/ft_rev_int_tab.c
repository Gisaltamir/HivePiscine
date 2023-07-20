/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 13:00:50 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/03 15:25:39 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	times_to_swap;
	int	helper;

	i = 0;
	if (size % 2 == 0)
	{
		times_to_swap = size / 2;
	}
	else
	{
	times_to_swap = (size - 1) / 2;
	}
	while (times_to_swap > 0)
	{
		helper = tab[size - 1];
		tab[size - 1] = tab[i];
		tab[i] = helper;
		i++;
		size--;
		times_to_swap--;
	}	
}
