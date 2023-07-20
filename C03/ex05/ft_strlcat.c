/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 19:52:15 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/14 21:20:12 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	final_size;

	final_size = 0;
	i = 0;
	while (*dest != '\0')
	{	
		final_size++;
		dest++;
	}
	while (i < size - 1)
	{
		if (*dest != '\0')
			*dest = *src;
		else
			*dest = '\0';
		dest++;
		src++;
		i++;
		final_size++;
	}
	return (final_size + 1);
}
