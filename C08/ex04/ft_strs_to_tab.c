/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:07:05 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/17 17:23:56 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

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
	int	i;
	char	*new_string;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	new_string = (char *)malloc(i + 1);
	if (new_string != NULL)
	{
		ft_strcpy(new_string, src);
	}
	return (new_string);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}


struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int i;
 
    i = 0;
    while (av[i])
    {
        i++;
    }
    i = 0;
    while (i < ac)
    {
        char *helper = av[i];
        struct s_stock_str av[i];
        av[i].str = *helper;
        av[i].size = ft_strlen(av[i]);
        av[i].copy= ft_strdup(av[i]);
        i++;
    }

}
