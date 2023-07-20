/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:14:19 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/04 17:51:46 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strupcase(char *str);

int main()
{
	char str[] = "asdaADSKJalsk";
	ft_strupcase(str);
	printf("%s\n", str);
	return 0;
}



