/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:04:14 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/14 18:49:57 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;
	int	new_letter;

	i = 0;
	j = 0;
	new_letter = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((j == 0 || new_letter == 1) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			new_letter = 0;
		}
		if (str[i] == ' ' || str[i] == '+' || str[i] == '-')
			new_letter = 1;
		j++;
		i++;
	}
	return (str);
}
