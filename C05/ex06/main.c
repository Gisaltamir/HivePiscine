/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:47:22 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/18 17:39:29 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb);

int main()
{
	printf("%d\n", ft_is_prime(20));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(-123));
	printf("%d\n", ft_is_prime(29));
}
