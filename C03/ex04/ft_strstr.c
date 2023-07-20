/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:44:39 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/14 21:18:03 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*first_letter;
	int		i;
	int		j;

	first_letter = str;
	i = 0;
	j = 0;
	while (to_find[i] != '\0' && *str != '\0')
	{
		if (*str == to_find[i])
		{
			i++;
			str++;
		}
		else
		{
			i = 0;
			j++;
			str++;
		}		
	}
	if (to_find[i] == '\0')
		return (str -1);
	else
		return (NULL);
}
