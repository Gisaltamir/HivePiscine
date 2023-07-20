/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttero <ttero@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:59:29 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/16 23:15:41 by ttero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print(char *value);

void	check(int num, int *key, char **value)
{
	int	i;

	i = 1;
	while (i < 1000)
	{
		if (key[i] == num)
		{
			print(value[i]);
			write(1, " ", 1);
		}
		i++;
	}
}
