/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:06:33 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/11 15:17:35 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(){
	char str[]= "Holis holis";
	char algo[20];
	ft_strncpy(algo, str, 3);
	printf("%s", algo);
	printf("%lu", sizeof(algo));
	return (0);
}
