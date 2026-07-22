/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strs_to_tab.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/22 16:39:53 by username         #+#    #+#              */
/*   Updated: 2026/07/23 01:49:16 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"
#include <unistd.h>

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;
	int			j;

	i = 0;
	tab = malloc((ac + 1) * sizeof(t_stock_str) + 1);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = malloc(tab[i].size + 1);
		j = 0;
		while (tab[i].str[j] != '\0')
		{
			tab[i].copy[j] = tab[i].str[j];
			j++;
		}
		tab[i].copy[j] = '\0';
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}

// int	main(void)
// {
// 	char	*tab[3];

// 	tab[0] = "abc";
// 	tab[1] = "def";
// 	tab[2] = "ghi";
// 	ft_show_tab(ft_strs_to_tab(3, tab));
// }
