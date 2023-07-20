/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 21:48:42 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/03 12:58:17 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	int	total_letters;	

	i = 0;
	total_letters = 0;
	while (str[i] != '\0')
	{
		total_letters++;
		i++;
	}
	return (total_letters);
}
