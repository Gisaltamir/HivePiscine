/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:38:39 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/18 17:37:50 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_sqrt(int nb);

int main()
{
	printf("%d\n", ft_sqrt(625));
	printf("%d\n", ft_sqrt(235));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(0));
	printf("%d", ft_sqrt(-33));
	return(0);
}
