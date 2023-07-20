/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:46:31 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/10 17:13:32 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strdup(char *src);

int main()
{
    char src[] = "Hello, world!";
    char *duplicate = ft_strdup(src);
    printf("Original string: %s\n", src);
    printf("Duplicated string: %s\n", duplicate);

    return 0;
}
