/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:54:41 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/05 14:52:04 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(){
	char str[]= "Holis holis";
	char algo[20];
	ft_strcpy(algo, str);
	printf("%s", algo);
	return (0);
}
