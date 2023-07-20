/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnuojua <rnuojua@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:52:18 by rnuojua           #+#    #+#             */
/*   Updated: 2023/07/12 16:41:38 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, unsigned int nb);
char *ft_strstr(char *str, char *to_find);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	ft_int_digits(int n)
{
	int	digits;

	digits = 0;
	while (n != 0)
	{
		digits++;
		n /= 10;
	}
	if (!digits)
		digits = 1;
	return (digits);
}

void	putnbr(int num)
{
	char	str[10];
	int		count;
	int		n;
	int		r;

	if (num < 0)
	{
		num = num * -1;
		write(1, "-", 1);
	}
	count = ft_int_digits(num);
	n = 0;
	while (n < count)
	{
		r = num % 10;
		num /= 10;
		str[count - n - 1] = r + '0';
		n++;
	}
	write(1, str, count);
}

void	ps(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int	main(int argc, char **argv)
{
	char	*tmps;
	int		result;
	char	*rp;
	int		num;

	/* must give two strings */
	if (argc < 3)
		return (1);
	/* third arg is a number */
	if (argc > 3)
		num = atoi(argv[3]);
	else
		num = 5;

	ps("Exercise 00 : ft_strcmp\n");
	result = ft_strcmp(argv[1], argv[2]);
	putnbr(result);
	ps("\n");
	ps("Expected strcmp:\n");
	result = strcmp(argv[1], argv[2]);
	putnbr(result);
	ps("\n");
	ps("\n");

	ps("Exercise 01 : ft_strncmp\n");
	result = ft_strncmp(argv[1], argv[2], num);
	putnbr(result);
	ps("\n");
	ps("Expected strncmp:\n");
	result = strncmp(argv[1], argv[2], num);
	putnbr(result);
	ps("\n");
	ps("\n");


	tmps = malloc(strlen(argv[1]) + strlen(argv[2]) + 1); /* + 1 for 1 null termiator */
	ps("Exercise 02 : ft_strcat\n");
	strcpy(tmps, argv[1]);
	ft_strcat(tmps, argv[2]);
	ps(tmps);
	ps("\n");
	ps("Expected strcat:\n");
	strcpy(tmps, argv[1]);
	strcat(tmps, argv[2]);
	ps(tmps);
	ps("\n");
	ps("\n");


	tmps = malloc(strlen(argv[1]) + num + 1); /* + 1 for 1 null termiator */
	ps("Exercise 03 : ft_strncat\n");
	strcpy(tmps, argv[1]);
	ft_strncat(tmps, argv[2], num);
	ps(tmps);
	ps("\n");
	ps("Expected strncat:\n");
	strcpy(tmps, argv[1]);
	strncat(tmps, argv[2], num);
	ps(tmps);
	ps("\n");
	ps("\n");


	ps("Exercise 04 : ft_strstr\n");
	rp = ft_strstr(argv[1], argv[2]);
	if (rp)
		ps(rp);
	else
		ps("NO_MATCH");
	ps("\n");
	ps("Expected strcmp:\n");
	rp = strstr(argv[1], argv[2]);
	if (rp)
		ps(rp);
	else
		ps("NO_MATCH");
	ps("\n");
	ps("\n");


	tmps = malloc(strlen(argv[1]) + num);
	ps("Exercise 05 : ft_strlcat\n");
	strcpy(tmps, argv[1]);
	result = (int)ft_strlcat(tmps, argv[2], num);
	ps(tmps);
	ps("\n");
	putnbr(result);
	ps("\n");
	ps("Expected strlcat:\n");
	strcpy(tmps, argv[1]);
	result = (int)strlcat(tmps, argv[2], num);
	ps(tmps);
	ps("\n");
	putnbr(result);
	ps("\n");
	ps("\n");
}
