/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 13:18:01 by username          #+#    #+#             */
/*   Updated: 2026/07/15 20:56:18 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	i = 0;
	result = 0;
	while (result < nb || i < 46340)
	{
		result = i * i;
		if (result == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_sqrt(25));
// }
