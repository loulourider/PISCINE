/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 16:39:53 by username          #+#    #+#             */
/*   Updated: 2026/07/22 22:17:14 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (nb < 0 && !(nb == -2147483648))
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	if (nb >= 0 && nb < 10 && !(nb == -2147483648))
	{
		ft_putchar('0' + nb);
	}
	if (nb > 9 && !(nb == -2147483648))
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;
	char	nl;
	int		j;

	nl = '\n';
	i = 0;
	j = 0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].str);
		write(1, &nl, 1);
		ft_putnbr(par[i].size);
		write(1, &nl, 1);
		while (par[i].copy[j] != '\0')
		{
			ft_putchar(par[i].copy[j]);
			j++;
		}
		write(1, &nl, 1);
		i++;
	}
}

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

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;
	int		size;

	size = ft_strlen(src);
	dest = malloc(size + 1);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;
	int			j;

	i = 0;
	j = 0;
	tab = malloc(ac * sizeof(t_stock_str));
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = malloc(tab[i].size + 1);
		// while (tab[i].str[j] != '\0')
		// {
		// 	tab[i].copy[j] = tab[i].str[j];
		// 	j++;
		// 	printf("%c", tab[i].copy[j]);
		// }
		// tab[i].copy[j] = '\0';
		i++;
	}
	return (tab);
}

int	main(void)
{
	char	*tab[3];

	tab[0] = "abc";
	tab[1] = "def";
	tab[2] = "ghi";
	ft_show_tab(ft_strs_to_tab(3, tab));
}
