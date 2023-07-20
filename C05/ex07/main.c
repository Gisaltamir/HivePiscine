/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:52:42 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/18 17:40:10 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_find_next_prime(int nb);

int main()
{
	printf("%d\n", ft_find_next_prime(-10));
	printf("%d\n", ft_find_next_prime(6));
	printf("%d\n", ft_find_next_prime(55));
	printf("%d\n", ft_find_next_prime(22));
}
