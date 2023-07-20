/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:55:43 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/17 13:33:22 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		modulo;
	char	number[40];
	int		index;

	index = 0;
	if (nb == 0)
		write(1, "0", 1);
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb < 0 && nb != -2147483648)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	while (nb > 0)
	{
		modulo = nb % 10;
		nb /= 10;
		number[index] = '0' + modulo;
		index++;
	}
	while (index > 0)
		write(1, &number[--index], 1);
	return ;
}
