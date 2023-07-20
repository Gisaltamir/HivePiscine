/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galtamir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:23:47 by galtamir          #+#    #+#             */
/*   Updated: 2023/07/20 18:49:04 by galtamir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Function declaration
char *ft_strjoin(int size, char **strs, char *sep);

int main()
{
    // Test case 1: Concatenating three strings with a comma separator
    char *strings1[] = {"Hello", "world", "!"};
    char separator1[] = "1234";
    char *result1 = ft_strjoin(3, strings1, separator1);
    printf("Test case 1: %s\n", result1);
  
    // Test case 2: Concatenating two strings with a space separator
    char *strings2[] = {"OpenAI", "GPT-3.5"};
    char separator2[] = " ";
    char *result2 = ft_strjoin(2, strings2, separator2);
    printf("Test case 2: %s\n", result2);
    
    // Test case 3: Concatenating a single string with an empty separator
    char *strings3[] = {""};
    char separator3[] = "";
    char *result3 = ft_strjoin(1, strings3, separator3);
    printf("Test case 3: %s\n", result3);


    return 0;
}
