/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:39:49 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/17 18:31:28 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_atoi(char *str);

int main()
{
    char *algo =  "1302";
    int lago = ft_atoi(algo);
    printf("%d\n", lago);

    return(0);
}
