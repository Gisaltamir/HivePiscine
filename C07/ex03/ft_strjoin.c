/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <galtamir@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:53:07 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/20 18:53:13 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	total_length(int size, char **strs, char *sep)
{
	int	i;
	int	length;

	length = 0;
	i = 0;
	while (i < size)
	{
		length += str_len(strs[i]);
		if (i < size - 1)
			length += str_len(sep);
		i++;
	}
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*final_str;

	final_str = (char *)malloc(total_length(size, strs, sep) + 1);
	if (final_str == NULL)
		return (0);
	i = -1;
	k = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			final_str[++k] = strs[i][j];
		if (i < size - 1)
		{
			j = -1;
			while (sep[++j] != '\0')
				final_str[++k] = sep[j];
		}
	}
	final_str[++k] = '\0';
	return (final_str);
}
