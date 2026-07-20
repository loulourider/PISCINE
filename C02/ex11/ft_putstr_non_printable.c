/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 20:47:30 by username          #+#    #+#             */
/*   Updated: 2026/07/16 15:01:29 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*base;
	int		u;
	int		d;
	int		i;

	i = 0;
	base = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (!((str[i] > 31 && str[i] < 127)))
		{
			d = str[i] / 16;
			u = str[i] % 16;
			ft_putchar('\\');
			ft_putchar(base[d]);
			ft_putchar(base[u]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int	main(void)
{
	char	str[256] =
	{
		0
	};
	for (int i = 0; i < 255; i++)
		str[i] = (char)(i + 1);
	ft_putstr_non_printable(str);
}
