/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttero <ttero@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:15:37 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/16 23:01:56 by ttero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		count_rows(char *buffer);
int		ft_atoi(char *str);
void	num(long int num, int *key, char **value);

int	*fill_keys(char *buffer)
{
	int	i;
	int	j;
	int	*key;

	i = 0;
	j = 0;
	key = malloc(10000);
	key[j] = ft_atoi(buffer + i);
	j = 1;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
		{
			i++;
			if (buffer[i] != '\n')
			{
				key[j] = ft_atoi(buffer + i);
				j++;
			}
		}
		i++;
	}
	return (key);
}

char	**fill_values(char *buffer, int i, int j, int k)
{
	char	**text;

	text = malloc(1000);
	while (buffer[i])
	{
		text[k] = malloc(1000);
		if (buffer[i] == ':')
		{
			i++;
			while (buffer[i] != '\n')
			{
				if (buffer[i] != count_rows(buffer))
				{
					text[k][j] = buffer[i];
					j++;
				}
				i++;
			}
			text[k][j] = '\0';
			k++;
			j = 0;
		}
		i++;
	}
	return (text);
}

char	**ini(char *buffer)
{
	int		i;
	int		j;
	int		k;
	char	**text;

	i = 0;
	j = 0;
	k = 0;
	text = fill_values(buffer, i, j, k);
	return (text);
}

void	free_arrays(char *buffer, char **text, int *key)
{
	int	i;

	i = 0;
	while (text[i])
	{
		free(text[i]);
		i++;
	}
	free(text);
	free(buffer);
	free(key);
}

int	fill(int val)
{
	int		numbers_file;
	char	*buffer;
	int		bytesread;
	int		*key;
	char	**text;

	buffer = malloc(2000);
	numbers_file = open("numbers.dict", O_RDONLY);
	if (numbers_file == -1)
		write(1, "Dict Error\n", 11);
	bytesread = read(numbers_file, buffer, 2000);
	key = fill_keys(buffer);
	text = ini(buffer);
	close(numbers_file);
	num(val, key, text);
	free_arrays(buffer, text, key);
	return (0);
}
