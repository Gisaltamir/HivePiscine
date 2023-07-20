/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <galtamir@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:53:58 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/20 18:54:03 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*numbers;

	i = 0;
	if (min >= max)
		return (0);
	numbers = (int *)malloc((max - min) * 4);
	if (numbers == NULL)
		return (0);
	while (min < max)
	{
		numbers[i] = min;
		min++;
		i++;
	}
	return (numbers);
}
