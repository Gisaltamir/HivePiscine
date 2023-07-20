/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dig_num.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttero <ttero@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:53:37 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/16 23:01:19 by ttero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	dig_num(int num)
{
	int	i;

	i = 0;
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

int	count_rows(char *buffer)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			count++;
		i++;
	}
	return (count);
}
