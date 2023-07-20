/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <galtamir@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:53:33 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/20 18:53:39 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	min_dup;

	min_dup = min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (range == NULL)
	{
		return (-1);
	}
	*range = (int *)malloc((max - min) * 4);
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (max - min_dup);
}
