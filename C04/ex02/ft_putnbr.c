/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 23:40:46 by username          #+#    #+#             */
/*   Updated: 2026/07/14 18:30:33 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	if (nb >= 0 && nb <= 9 && !(nb == -2147483648))
	{
		ft_putchar('0' + nb);
	}
	if (nb > 9 && !(nb == -2147483648))
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
// int	main(void)
// {
// 	ft_putnbr(-218);
// 	return (0);
// }
