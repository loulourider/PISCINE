/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 21:07:02 by username          #+#    #+#             */
/*   Updated: 2026/07/22 21:59:12 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
