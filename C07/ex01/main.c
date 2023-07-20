/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:28:08 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/20 17:41:51 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int *ft_range(int min, int max);

int main()
{
    int min = -10;
    int max = 10;

    int *result = ft_range(min, max);

    if (result != NULL)
    {
        printf("Range: ");
        for (int i = 0; i < max - min; i++)
        {
            printf("%d ", result[i]);
        }
        printf("\n");

        }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
