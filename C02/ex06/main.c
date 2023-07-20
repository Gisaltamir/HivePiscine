/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:33:07 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/11 15:45:33 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str);

int main()
{
	char *str = "asd_?";
    int i = ft_str_is_printable(str);
    printf("%d\n", i);
    return 0;
}

