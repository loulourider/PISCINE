/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 02:07:43 by username          #+#    #+#             */
/*   Updated: 2026/07/14 12:42:49 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	fact = nb;
	i = 1;
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (i < nb)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(0));
// }
