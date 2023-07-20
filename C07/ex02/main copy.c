/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:28:08 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/20 18:50:45 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main() {
    int *range = NULL;
    int min = -10;
    int max = 15;
    int size = ft_ultimate_range(&range, min, max);
    printf("Range elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", range[i]);
    }
    printf("\n");
	printf("%d", size);
    return 0;
}
