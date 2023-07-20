/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:58:57 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/12 14:58:58 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void set_point(struct t_point *point)
{
    point->x = 42;
    point->y = 21;
}

int main(void)
{
    struct t_point point;
    printf("%d", point.y);
    return (0);
}
