/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:07:10 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/10 13:18:05 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	helper;

	i = 0;

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

