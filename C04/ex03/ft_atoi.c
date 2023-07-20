/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:39:49 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/17 18:33:57 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	negative;
	int	result;
	int	i;

	i = 0;
	negative = 0;
	result = 0;
	while (*str == ' ' || *str == '+' || *str == '-')
	{
		if (*str == '-')
			negative = !negative;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	if (negative)
		result *= -1;
	return (result);
}
