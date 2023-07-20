/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:25:45 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/03 19:26:55 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main()
{
	char *str = "ajslkdaAaslkd";
    int i = ft_str_is_lowercase(str);
    printf("%d\n", i);
    return 0;
}
