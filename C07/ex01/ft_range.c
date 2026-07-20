/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lallaire <lallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 16:07:42 by username          #+#    #+#             */
/*   Updated: 2026/07/19 16:33:07 by lallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	dist(int min, int max)
{
	int	result;

	result = max - min;
	if (result < 0)
	{
		return (result * -1);
	}
	else
	{
		return (result);
	}
}

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	j;

	i = min;
	j = 0;
	if (min >= max)
	{
		return (0);
	}
	tab = malloc(dist(min, max) * sizeof(int));
	while (i < max)
	{
		tab[j] = i;
		i++;
		j++;
	}
	return (tab);
}

// int	main(void)
// {
// 	int	i;
// 	i = 0;
// 	int	*tab = ft_range(-10, -4);
// 	while (i != 6)
// 	{
// 		printf("%d  ", tab[i]);
// 		i++;
// 	}
// }
