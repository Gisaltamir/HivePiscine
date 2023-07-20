/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <galtamir@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:54:19 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/20 18:54:25 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*new_string;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	new_string = (char *)malloc(i);
	if (new_string == NULL)
		return (0);
	ft_strcpy(new_string, src);
	return (new_string);
}
